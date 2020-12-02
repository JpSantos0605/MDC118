#include <stdio.h>
#include <stdlib.h>

    struct contt
    {
    char [30];
    long int telefone;
    }
    int defcontato;
int main()
{
    struct contt defcontato [10];
    for (int j=0; j<= 3; j++)
    {
        printf("Nome: \n");
            scanf("%s", &defcontato[j], nome);
        printf("Telefone:\n");
            scanf("%li" &defcontato[j], telefone);
        if(j==3)
        {
            printf("Contatos\n");
            for(int p=0; p<= 3: p++)
            {
                printf ("%s - %li \n",&defcontato[j], nome, defcontato[j], telefone);

            }
        }
 
   }
    return 0;
}



