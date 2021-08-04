const int relay = 13;
char Incoming_value = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  }
  
  void loop(){
    if(Serial.available() > 0)
    {
      Incoming_value = Serial.read();
      Serial.print(Incoming_value);
      Serial.print("\n");

      if (Incoming_value == '1'){
        digitalWrite(relay, HIGH);
        Serial.println("Light ON");
      }
      if (Incoming_value == '0'){
         digitalWrite(relay, LOW);
         Serial.println("Light OFF");
      }
     }
    }
