# SettingRTCToDS1307_connectedtoNodemcu
Connect the Nodemcu to DS1307 board, Initialise the time to the time the sketch was compiled and then print Date/Time

The connections are simple.

DS1307 has +5V, GND, SCL and SDA

Connect the 5v to 3.3v of Nodemcu ( GND to GND of the Nodemcu )

Connect the SCL to D2 of Nodemcu

Connect the SDA to D1 of Nodemcu


Handicap is that if the power is lost/disconnected, the RTC loses it's time tracking ability and needs to be set all over again by compiling the sketch ( meaning it has to be near a laptop)




