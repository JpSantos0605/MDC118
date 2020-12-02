#include "stdio.h"
#include "stdbool.h"
 
int main()
{
	int ano;
	bool bissexto;

	printf("Digite o ano: ");

	scanf("%d", &ano);
 
	if (ano % 400 == 0) {
		bissexto = true;		
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		bissexto = true;		
	}
	else {
		bissexto = false;
	}
 
	if (bissexto == true) {
		printf("O ano é bissexto.");
	} else {
		printf("O ano não é bissexto.");
	}
}