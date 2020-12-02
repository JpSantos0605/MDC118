#include <stdio.h>

int main()
{
    struct 
        {
        int dia, int mes, int ano;
        } 
        data;

    printf("Entre com dados (DD/MM/AAAA:\n");
    scanf("%d/%d/%d",&data.dia, &data.mes, &data.ano);

    printf("formato BR %d/%d/%d \n", &data.dia, &data.mes, %data.ano);
    printf("formato US %d/%d/%d \n", &data.mes, &data.dia, &data.ano);

    return 0;
}