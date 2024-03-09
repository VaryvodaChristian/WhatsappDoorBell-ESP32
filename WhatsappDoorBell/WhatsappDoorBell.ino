#include <WiFi.h>
#include <WiFiManager.h>
#include "CallMeBot.h"

WiFiManager wifiManager;
CallMeBot callMeBot;

int btnGPIO = 0;
int btnState = false;

void setup()
{
  Serial.begin(115200);
  delay(10);
  wifiManager.autoConnect("WhatsappDoorBell", "12345678910");  
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  // Send Message to WhatsAPP
  callMeBot.sendMessage("Started Whatsappdoorbell");
}

void loop()
{
  
}