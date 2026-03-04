#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
#include <Wire.h>
#include "MAX30100_PulseOximeter.h"
#define REPORTING_PERIOD_MS     1000
#include <DHT.h>
#define DHTPIN 8         // DHT data pin connected to Arduino pin 5
#define DHTTYPE DHT11     // DHT11 (DHT Sensor Type )
DHT dht(DHTPIN, DHTTYPE); // Initialize the DHT sensor
PulseOximeter pox;
uint32_t tsLastReport = 0;
int t;
int cnt=0;
int cnt1=0;
int bpm=0;
int spo2=0;
const int BUZ=11;
void onBeatDetected() {
    Serial.println("Beat!");
}

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("TEMPERATURE:    ");
  lcd.setCursor(0,1);
  lcd.print("                ");
  pinMode(BUZ,OUTPUT);  
  digitalWrite(BUZ,LOW);  
  dht.begin();    
    Serial.begin(9600);
    Serial.print("Initializing pulse oximeter..");
 
    if (!pox.begin()) {
        Serial.println("FAILED");
        for(;;);
    } else {
        Serial.println("SUCCESS");
    }
    pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
    pox.setOnBeatDetectedCallback(onBeatDetected);
   
}

void loop() {
  if(cnt==10)
  {
  t = dht.readTemperature();
  lcd.setCursor(12,0);  
  lcd.print(t);  
  lcd.setCursor(14,0);  
  lcd.print("C ");
    Serial.print("TEMPRATURE = ");  
    Serial.print(t);
    Serial.print("*C");
    Serial.println();
    if(t>37)
    {
    digitalWrite(BUZ,HIGH);  
    Serial.println("ALERT!HIGH TEMPERATURE");
    delay(500);
    digitalWrite(BUZ,LOW);          
    }

    cnt=0;

    if (!pox.begin()) {
        Serial.println("FAILED");
        for(;;);
    } else {
        Serial.println("SUCCESS");
    }
    pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
    pox.setOnBeatDetectedCallback(onBeatDetected);    
  }
    pox.update();
    if (millis() - tsLastReport > REPORTING_PERIOD_MS) {
        Serial.print("Heart rate:");
        Serial.print(pox.getHeartRate());
        Serial.println("bpm");

        lcd.setCursor(0,1);
        lcd.print("BPM:");
        lcd.print(pox.getHeartRate(),0);
        lcd.print("  ");        
       if((pox.getSpO2())==0)
        {
        cnt1=cnt1+1;    
        if(cnt1==10)
        {
        lcd.setCursor(8,1);
        lcd.print("SpO2:");
        lcd.print(pox.getSpO2());
        lcd.print("% ");
        Serial.print("Spo2:");      
        Serial.print(pox.getSpO2());
        Serial.println("%");  
        if(pox.getSpO2()<90)
        {
        digitalWrite(BUZ,HIGH);  
        Serial.println("ALERT!ABNORMAL SPO2");                
        }
        else
        {
        digitalWrite(BUZ,LOW);          
        }              
        cnt1=0;          
        }
        }
        else
        {  
        cnt1=0;              
        lcd.setCursor(8,1);
        lcd.print("SpO2:");
        lcd.print(pox.getSpO2());
        lcd.print("% ");
        Serial.print("Spo2:");      
        Serial.print(pox.getSpO2());
        Serial.println("%");
        if(pox.getSpO2()<90)
        {
        digitalWrite(BUZ,HIGH);  
        Serial.println("ALERT!ABNORMAL SPO2");                
        }
        else
        {
        digitalWrite(BUZ,LOW);          
        }
        }              
        tsLastReport = millis();
        cnt=cnt+1;
 
    }

}
