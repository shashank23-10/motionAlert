#define pir 8 
#define buzzer 4

void setup()
{
  Serial.begin(9600);
    pinMode(pir, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int pir_value = digitalRead(pir);
  Serial.println(pir_value);
  
  if(pir_value == HIGH){
    Serial.println("Motion Detected");
    digitalWrite(buzzer, HIGH);
  }
  else {
    Serial.println("No Motion Detected");
    digitalWrite(buzzer, LOW);
  }
}
