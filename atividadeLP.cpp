#include <stdio.h>
#include <locale.h>

int main()
{
	int periodo, animais;
	float consumodia, quantf, precof,precofdesconto;
		
		setlocale(LC_ALL,"Portuguese_brazil");
		
	printf("\n\tDigite o n�mero de animais: ");
	scanf("%i",&animais);
	
	printf("\n\tDigite o per�odo: ");
	scanf("%i",&periodo);
	
	printf("\n\tDigite o consumo animal/dia: ");
	scanf("%f",&consumodia);
	
	quantf=(periodo*(animais*consumodia))/40; 
	precof=quantf*48;
	
	printf("\n\tPara %i dias ser� preciso  %.0f sacos de ra��o. O valor total da compra � de R$ %.2f.\n ",periodo,quantf,precof);
	
	if (quantf <= 150)
	{
	
		printf("\tO produto est� disponivel em estoque. ");
	}
	else
	{
		printf("\tO produto n�o esta disponivel em estoque.");
		
	}
	
	if (precof>=4000)
	{
		precofdesconto = precof-(precof*0.06);
		
		printf("\n\tO pre�o com 6%% de desconto � de R$%.2f. ",precofdesconto);
	}
	else
	{
	 printf("\tO valor total da compra � de R$ %.2f. ",precof);	
	}
	return 0;
}
	
