#define KNOWN_RES 10000
uint16_t raw = 0x00;
float reading = 0.0f;
void setup()
{
    pinMode(A0, INPUT);
    Serial.begin(9600);
}
void loop()
{
    delay(500);
    raw = analogRead(A0);
    reading = raw * 5.0f / 1023.0f;
    reading = KNOWN_RES * ((5.0f / reading) - 1);
    Serial.print("Raw: ");
    Serial.print(raw);
    Serial.print("  Value: ");
    Serial.println(reading);
}
