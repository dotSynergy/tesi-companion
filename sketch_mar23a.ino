#include "DHT.h"
#include "src/mavlink/common/mavlink.h"

//external sensor
#define DHTPIN1 A1
//external sensor adjustments
#define DHTPIN1_T -2
#define DHTPIN1_H 5
//onboard sensor
#define DHTPIN2 A0
//onboard sensor adjustments
#define DHTPIN2_T -4
#define DHTPIN2_H 3

#define LIGHTPIN A2
#define PPMPIN A3

#define DHTTYPE DHT11

DHT dht1(DHTPIN1, DHTTYPE);
DHT dht2(DHTPIN2, DHTTYPE);

//record every 1 second
#define DELAY 1000

uint8_t cnt;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);

  dht1.begin(); // initialize the sensor
  dht2.begin(); // initialize the sensor

  cnt = 1;
}

void loop() {
  // put your main code here, to run repeatedly:
  // wait a few seconds between measurements.
  delay(DELAY);

  // read humidity
  const float humi1  = dht1.readHumidity() + DHTPIN1_H;
  const float humi2  = dht2.readHumidity() + DHTPIN2_H;
  // read temperature as Celsius
  
  const float tempC1 = dht1.readTemperature() + DHTPIN1_T;
  const float tempC2 = dht2.readTemperature() + DHTPIN2_T;
  // read light
  const int light = analogRead(LIGHTPIN);
  // read ppms
  const int ppm = 0;
  
  // check if any reads failed
  //if (isnan(humi1) || isnan(humi2))
    //Serial.println("Failed to read from DHT sensor!");
  //else 
    //print_sensors(light, humi1, tempC1, humi2, tempC2, ppm);

  // Initialize the required buffers
  mavlink_message_t msg;
  uint8_t buf[MAVLINK_MAX_PACKET_LEN];
  
  Mav_Send_HeartBeat();
  Mav_Send_Messages(light, humi1, tempC1, humi2, tempC2, ppm);

  cnt == 255 ? cnt = 1 : cnt = cnt+1 ;
}


void pack_and_send(uint8_t* buf,mavlink_message_t msg){
  // Copy the message to the send buffer
  int len = mavlink_msg_to_send_buffer(buf, &msg);
  
  Serial.write(buf, len);
}

void Mav_Send_HeartBeat()
{
  mavlink_message_t msg;
  uint8_t buf[MAVLINK_MAX_PACKET_LEN];
  // MAVLink
  int type = MAV_TYPE_ONBOARD_CONTROLLER;   ///< This system is an airplane / fixed wing
 
  // Define the system type, in this case an airplane -> on-board controller
  uint8_t autopilot_type = MAV_AUTOPILOT_INVALID;
 
  uint8_t system_mode = MAV_MODE_PREFLIGHT; ///< Booting up
  uint8_t custom_mode = 0;                 ///< Custom mode, can be defined by user/adopter
  uint8_t system_state = MAV_STATE_ACTIVE; ///< System ready for flight

  // Pack the message
  //mavlink_msg_heartbeat_pack(sysid,compid, &msg, type, autopilot_type, system_mode, custom_mode, system_state);
  mavlink_msg_heartbeat_pack(1,2, &msg, type, autopilot_type, system_mode, custom_mode, system_state);

  pack_and_send(buf, msg);
  
}

void Mav_Send_Messages(
  int light,
  float humi1, float tempC1,
  float humi2, float tempC2,
  int ppm) {

  mavlink_message_t msg;
  uint8_t buf[MAVLINK_MAX_PACKET_LEN];

  // MAVLink config
  
  // Pack the message
  //mavlink_msg_ardu_heartbeat_pack(1, 2, &msg, STATUS_OK, DELAY, 1, 255);
  mavlink_msg_ardu_temp_pack(1, 2, &msg, tempC1, cnt, 255, 2);
  pack_and_send(buf, msg);

  mavlink_msg_ardu_temp_ext_pack(1, 2, &msg, tempC2, cnt, 255, 2);
  pack_and_send(buf, msg);

  mavlink_msg_ardu_hum_pack(1, 2, &msg, humi1, cnt, 255, 2);
  pack_and_send(buf, msg);

  mavlink_msg_ardu_hum_ext_pack(1, 2, &msg, humi2, cnt, 255, 2);
  pack_and_send(buf, msg);

  mavlink_msg_ardu_light_pack(1, 2, &msg, light, cnt, 255, 2);
  pack_and_send(buf, msg);

  mavlink_msg_ardu_air_ppm_pack(1, 2, &msg, ppm, cnt, 255, 2);
  pack_and_send(buf, msg);
  
}


void print_sensors(
  int light,
  float humi1, float tempC1,
  float humi2, float tempC2,
  int ppm) {

  Serial.print("Light: ");
  Serial.print(light);
  Serial.print("\n");
  
  Serial.print("EXT: Humidity: ");
  Serial.print(humi1);
  Serial.print("%");

  Serial.print("  |  "); 

  Serial.print("Temperature: ");
  Serial.print(tempC1);
  Serial.print("°C\n");
  
  Serial.print("INT: Humidity: ");
  Serial.print(humi2);
  Serial.print("%");

  Serial.print("  |  "); 

  Serial.print("Temperature: ");
  Serial.print(tempC2);
  Serial.print("°C");

  if(ppm > 0){
    Serial.print("  |  "); 
  
    Serial.print("PPM: ");
    Serial.print(ppm);
  }

  Serial.print("\n\n");
}
