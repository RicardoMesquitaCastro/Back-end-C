#include <stdio.h> //biblioteca de comandos            // FRASES AZUIS SÃO MEUS COMENTARIOS 

int main()  //nao sei oque é mais tem que ter
{

int quantidadelivros;  //variaveis enunciado 
float preco, valortotal, precodesconto;

printf("\n\tDigite a quantidade de livros vendidos: "); //mensagem ao usuario
scanf("%i",&quantidadelivros);  //%i é porque é uma int: numero inteiro

printf("\n\tDigite o preco dos livros: ");   
scanf("%f",&preco);  //%f é proque é um float: numero com virguça, e o & é para ler o numero que o usuario digita e armazenar na memoria

valortotal = quantidadelivros*preco; // ooo calculo, apenas multiplicar um pelo outro pra saber o total :)

printf("\n\tO valor total dos livros sao de R$%.2f \n",valortotal);  //digitar na tela o valor total da compra
// daqui pra cima é a resposta da questão 2. copiar e colar.

if (preco >= 10)   //condição SE, ou seja, se o preço for maior ou igual a 10 reais a formula de baixo sera executada
{
	precodesconto =quantidadelivros*(preco-(preco*0.08)); 

	printf("\n\tO valor total com o desconto de 8 por cento e de %.2f ",precodesconto);  //essa aparecera na tela o valor com desconto de 8%
	
}
else // SENÂO , o produto sendo menos de 10 reais não haverá desconto e a mensagem abaixo sera executada . 
 
  	printf("\n\t OBRIGADO PELA PREFERENCIA ");   // OBrigado pela preferencia e até a proxima kkkkkk. Viu é facil!!!
  	
  	
  	return 0;	      //e para colar o exercicio 4 tem que copiar o codigo todo viu, aconselho apagar esses comentarios :)
}

 
 

















