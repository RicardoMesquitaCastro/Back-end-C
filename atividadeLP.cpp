#include <stdio.h>
#include <locale.h>

int main()
{
	int periodo, animais;
	float consumodia, quantf, precof,precofdesconto;
		
		setlocale(LC_ALL,"Portuguese_brazil");
		
	printf("\n\tDigite o número de animais: ");
	scanf("%i",&animais);
	
	printf("\n\tDigite o período: ");
	scanf("%i",&periodo);
	
	printf("\n\tDigite o consumo animal/dia: ");
	scanf("%f",&consumodia);
	
	quantf=(periodo*(animais*consumodia))/40; 
	precof=quantf*48;
	
	printf("\n\tPara %i dias será preciso  %.0f sacos de ração. O valor total da compra é de R$ %.2f.\n ",periodo,quantf,precof);
	
	if (quantf <= 150)
	{
	
		printf("\tO produto está disponivel em estoque. ");
	}
	else
	{
		printf("\tO produto não esta disponivel em estoque.");
		
	}
	
	if (precof>=4000)
	{
		precofdesconto = precof-(precof*0.06);
		
		printf("\n\tO preço com 6%% de desconto é de R$%.2f. ",precofdesconto);
	}
	else
	{
	 printf("\tO valor total da compra é de R$ %.2f. ",precof);	
	}
	return 0;
}
	
