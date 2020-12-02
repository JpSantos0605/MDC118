#include <stdio.h> 
#include <stdlib.h>

 int main () 
 {
    int num1,num2,maior;

    printf("Digite um numero : ");
    scanf("%d",&num1);
    printf("Digite outro numero : ");
    scanf("%d",&num2);

    if (num1 > num2) 

    maior = num1;
    printf("Primeiro numero e maior que o segundo : %d",maior);

    else if (num2 < num1)
    maior = num2;
    printf("\nSegundo numero e maior que o primeiro : %d\n",maior);

    system("pause");
    return 0;

