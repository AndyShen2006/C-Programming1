#define N 4
int pin[N]={8,9,10,11};
void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<=N;i++){
    pinMode(pin[i],OUTPUT);
    digitalWrite(pin[i],LOW);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
    for(int i=0;i<=N;i++){
        digitalWrite(pin[i],HIGH);
        for(int j=0;j<=N;j++){
          if(j!=i){
            digitalWrite(pin[j],LOW);
            }
          }
      }
}
