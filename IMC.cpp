#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
 char linha[50];
 char caractere;
 int i=0;
 float a, p, imc;
 printf("\tNome: ");
 do{
 caractere = getchar();
 linha[i] = caractere;
 i++;
 }while (caractere != '\n');
 linha[i -1] = '\0';
 printf("\tAltura em metro: ");
 scanf("%f", &a);
 printf("\tPeso: ");
 scanf("%f", &p);
 imc = p / (a*a);
 if(imc>=30){
 printf("\n\tNome: %s. " ,linha);
 printf("\n\tAltura: %.2f. ", a);
 printf("\n\tPeso: %.2f ", p);
 printf("\n\n\t%s, seu IMC é %.2f.\n\tCom este IMC, você se enquadra no grupo dos obesos,cuidado!\n\n", linha, imc);
 }else{
 printf("\n\tNome: %s. " ,linha);
 printf("\n\tAltura: %.2f. ", a);
 printf("\n\tPeso: %.2f", p);
 printf("\n\n\t%s, seu IMC é: %.2f.\n\n",linha, imc);
 }
 return 0;
}
