/* 
 *  Date and time functions using just software, based on millis() & timer
 *   This code is for getting the current date and time,
 *  Initialize the RTC to the time the sketch was compiled and then wake up
 * every second, prints the date and time.
 * 
 * Connect the DS1307 to the Nodemcu.
 * 
 * The Nodemcu has 3.3v but it powers the DS1307, when the Nodemcu is powered 
 * by the Laptop thru the USB jack.
 * 
 * 
 *  e.g:
2019/6/15 18:4:20
2019/6/15 18:4:21
2019/6/15 18:4:22
2019/6/15 18:4:23
2019/6/15 18:4:24
2019/6/15 18:4:25
2019/6/15 18:4:26
2019/6/15 18:4:27
2019/6/15 18:4:28

 * 
*/

#include <Wire.h>
#include "RTClib.h"

RTC_Millis RTC;

void setup () {
    Serial.begin(9600);
    // following line sets the RTC to the date & time this sketch was compiled
    RTC.begin(DateTime(__DATE__, __TIME__));
}

void loop () {
    DateTime now = RTC.now();
    
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.print(' ');
    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();

    delay(1000);
}
