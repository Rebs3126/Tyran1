
const int enA = 9;
const int in3 = 8;
const int in4 = 7;

void setup() {
 //pines de salida//
  pinMode(enA, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Establecer el sentido de rotación inicial
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  // Iniciar el motor con velocidad cero
  analogWrite(enA, 0);
}

void loop() {
  // Aumentar la velocidad gradualmente
  for (int speed = 0; speed <= 255; speed++) {
    analogWrite(enA, speed);
    delay(10);
  }

  delay(1000); // Esperar un segundo

  // Disminuir la velocidad gradualmente
  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(enA, speed);
    delay(10);
  }

  delay(1000); // Esperar un segundo
}

    //Servo//

