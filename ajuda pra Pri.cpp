#include <stdio.h> //biblioteca de comandos            // FRASES AZUIS S�O MEUS COMENTARIOS 

int main()  //nao sei oque � mais tem que ter
{

int quantidadelivros;  //variaveis enunciado 
float preco, valortotal, precodesconto;

printf("\n\tDigite a quantidade de livros vendidos: "); //mensagem ao usuario
scanf("%i",&quantidadelivros);  //%i � porque � uma int: numero inteiro

printf("\n\tDigite o preco dos livros: ");   
scanf("%f",&preco);  //%f � proque � um float: numero com virgu�a, e o & � para ler o numero que o usuario digita e armazenar na memoria

valortotal = quantidadelivros*preco; // ooo calculo, apenas multiplicar um pelo outro pra saber o total :)

printf("\n\tO valor total dos livros sao de R$%.2f \n",valortotal);  //digitar na tela o valor total da compra
// daqui pra cima � a resposta da quest�o 2. copiar e colar.

if (preco >= 10)   //condi��o SE, ou seja, se o pre�o for maior ou igual a 10 reais a formula de baixo sera executada
{
	precodesconto =quantidadelivros*(preco-(preco*0.08)); 

	printf("\n\tO valor total com o desconto de 8 por cento e de %.2f ",precodesconto);  //essa aparecera na tela o valor com desconto de 8%
	
}
else // SEN�O , o produto sendo menos de 10 reais n�o haver� desconto e a mensagem abaixo sera executada . 
 
  	printf("\n\t OBRIGADO PELA PREFERENCIA ");   // OBrigado pela preferencia e at� a proxima kkkkkk. Viu � facil!!!
  	
  	
  	return 0;	      //e para colar o exercicio 4 tem que copiar o codigo todo viu, aconselho apagar esses comentarios :)
}

 
 

















