/********************************-******************
  Essa biblioteca � utilizada para definir saidas

  Desenvolvido por F�bio Souza - 09/2013
  FBS Eletr�nica - www.fbseletronica.com.br

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