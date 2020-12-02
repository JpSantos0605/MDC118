#include <stdio.h>
int main()
{
    char caracter;
    printf ("Pressione qualquer caracter:\n");
    scanf ("%c",&caracter);

    if([caracter>= 'a' && caracter <='z']) || ([caracter> = 'A' &&caracter<='Z'])
        {
            printf ("'%c' e uma letra\n",caracter);
        }
    else if (caracter>='0'&&caracter<='9')
        {
            printf("'%c' e um numero\n", caracter);
        }
    else
    {
        printf ("'%c' e um caracter especial\n", caracter);
    }
    return 0;
}