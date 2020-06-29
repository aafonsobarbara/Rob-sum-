void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop()
{
    //retorna o número de bytes de dados recebidos na porta serial e compara esse número com 0. Se o número de bytes disponíveis for maior que 0, serão executadas as instruções.
    if (Serial.available() > 0) {
        char ch = Serial.read();
        Serial.print("Received: ");
        Serial.println(ch);
        if (ch == 'a') {
            digitalWrite(13, HIGH); //acende led
        }
        else {
            digitalWrite(13, LOW);
        }
    }
}