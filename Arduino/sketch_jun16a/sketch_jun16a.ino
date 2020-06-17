unsigned char data_rx_labview;
uint16_t cuenta=0;
void setup() {
 Serial.begin(9600);
 

}

void loop() {
 if(Serial.available()>0){
  data_rx_labview=Serial.read();
  if( data_rx_labview=='E'){
    Serial.print("ICuenta: ");
    Serial.print(cuenta);
    Serial.print("F");
    cuenta++;
  }
 }
}
