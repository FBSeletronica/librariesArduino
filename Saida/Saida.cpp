/********************************-******************
  Essa biblioteca é utilizada para definir saidas

  Desenvolvido por Fábio Souza - 09/2013
  FBS Eletrônica - www.fbseletronica.com.br

 ****************************************************/

#include"Saida.h"

Saida::Saida(int pin)
{
	pinMode(pin,OUTPUT);
	pino = pin;
}
Saida::~Saida()
{
	pinMode(pino,INPUT);
	pino = 0;
}

void Saida::liga()
{
   digitalWrite(pino,HIGH);
}

void Saida::desliga()
{
   digitalWrite(pino,LOW);
}

void Saida::inverte()
{
	digitalWrite(pino,!digitalRead(pino));
}