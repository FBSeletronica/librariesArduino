/********************************-******************
  Essa biblioteca é utilizada para definir saidas

  Desenvolvido por Fábio Souza - 09/2013

 ****************************************************/

#ifndef SAIDA_H
#define SAIDA_H

#include <Arduino.h>

class Saida
{
	public:
		Saida(int pin);
		~Saida();
		void  liga();
		void  desliga();
		void  inverte();
		private:
	    int pino;
};

#endif
