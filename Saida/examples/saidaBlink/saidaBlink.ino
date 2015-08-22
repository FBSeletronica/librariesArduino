/********************************-******************
  Essa biblioteca é utilizada para definir saidas

  Desenvolvido por Fábio Souza - 09/2013
  FBS Eletrônica - www.fbseletronica.com.br
 ****************************************************/
#include <Saida.h>

//instancia um objeto chamado LED no pino 13
Saida LED(13);

void setup()
{
}

void loop()
{
  LED.liga();      //liga o led
  delay(1000);    //aguarda 1 segundo
  LED.desliga();  //desliga o Led
  delay(1000);    //aguasrda 1 segundo
}

