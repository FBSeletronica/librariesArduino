/********************************-******************
  Essa biblioteca é utilizada para definir saidas

  Desenvolvido por Fábio Souza - 09/2013
 ****************************************************/
#include <Saida.h>

//cria um rele passando como parâmetro o pino que o mesmo está ligado
Saida rele(8);

const byte tecla =2;

//configura arduino
void setup()
{  
  pinMode(tecla,INPUT);
}

//loop principal
void loop()
{
 if(tecla == LOW)
 {
   while(tecla == LOW); //aguada tecla ser solta
   rele.inverte();
 }
}
