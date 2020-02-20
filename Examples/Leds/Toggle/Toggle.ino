// ------------------------------------------------ ROBUS KIDSY -----------------------------------------------
//
// Nivel de dificultad: FACIL
//
// EJEMPLO DE USO DE LOS LEDS DE USUARIO LED1, LED2, LED3 Y LED4
// Este ejemplo es de uso libre y esta pensado para dar una introduccion al hardware del robot Robus Kidsy.
// Autor: Fabian Alfonso Flores
// Empresa: Proyectil Mx
// Fecha: 17 de febrero de 2020
// ------------------------------------------------------------------------------------------------------------
// Robus Kidsy cuenta con 4 LEDs de usuario:
// - Led1
// - Led2
// - Led3 (Disponible a partir de la version 3.1)
// - Led4 (Disponible a partir de la version 3.1)
// Nota importante: El LED blanco junto al sensor de color no se puede controlar directamente.
//
// En este ejemplo aprenderemos a utilizar la funcion toggle para cambiar el estado de un LED. Si el LED esta
// encendido, al usar toggle se apagara, y si esta apagado, se encendera. Al acerlo, indirectamente se cambia 
// el estado de su variable status, por lo que, consultando esa variable, se puede saber el estado actual 
// del LED.
// ------------------------------------------------------------------------------------------------------------

#include<RobusKidsy.h>

Robus Kidsy;              // Declara una instancia tipo Kidsy, llamada de igual forma

void setup() {
  Serial.begin(115200);   // Inicializa comunicacion serial a 115200 baudios
  Kidsy.begin();          // Inicializa el hardware del Robus Kidsy
}

void loop() {
  if(Kidsy.ButtonA.read() == PRESSED) {
    Kidsy.Led1.toggle();  // Al presionar el boton, el LED1 cambia de estado
    Serial.print("El Led1 que estaba ");
    if(Kidsy.Led1.status == 1) Serial.println("apagado pasa a estar encendido");
    else Serial.println("encendido pasa a estar apagado");
  }
} 