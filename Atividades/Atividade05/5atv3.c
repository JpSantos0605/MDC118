#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
#define TAMMAX 80

int main()
{

 char nome[80];

 printf("Digite uma frase: ");
 fgets(nome, TAMMAX, stdin);

printf("%s", nome);

system("pause");
return 0;
}