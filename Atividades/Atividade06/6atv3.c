#include <stdio.h>
enum mes { JAN, FEV, MAR, ABR, MAI, JUN, JUL, AGO, SET, OUT, NOV, DEZ };

void main()
{
  enum mes index;
  char *meses[12] = { "Janeiro", "Fevereiro", "Marco",
      "Abril", "Maio", "Junho",
      "Julho", "Agosto", "Setembro",
      "Outubro", "Novembro", "Dezembro" };
  for (index = JAN; index <= DEZ; index++)
    printf("\n%s", meses[index]);
    return 0;
}