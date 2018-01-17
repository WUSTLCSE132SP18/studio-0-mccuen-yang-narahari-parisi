/* helloworld
 *
 * output simple hello message
 *
 */

void setup() {
  Serial.begin(9600);
  Serial.println("Hello, world!");
  pinMode(13,OUTPUT);
  int sec =0;
}

void loop() {
//  for(int s =0; s<20; ++s){
//  delay(1000);
//  Serial.print(s);
//  Serial.println(" second have elapsed");
delay(1000);
digitalWrite(13,HIGH);
Serial.println(millis());
delay(1000);
digitalWrite(13,LOW);
Serial.println(millis());

//}
}

