#include <NewPing.h>

//definindo sensor de distancia para pinos 14 e 15
#define TRIGGER_PIN  14
#define ECHO_PIN     15
//distancia maxima do sensor
#define MAX_DISTANCE 200

NewPing DistanceSensor(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
//o pino de disparo, o pino de eco e a distância máxima

void setup()
{
    Serial.begin(9600);
    //configura a comunicação serial para ver a saída da placa Arduino no Serial Monitor.
}

void loop()
{
    unsigned int cm = DistanceSensor.ping_cm();
    //distancia do tempo do sensor
    Serial.print("Distance: ");
    Serial.print(cm);
    Serial.println("cm");
    delay(1000);
}