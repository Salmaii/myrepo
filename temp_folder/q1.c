#include <stdio.h>
int main ()
{
char ex3[5] = {'z', 'k', 'w', 'x', 'v'};
int cont1;
cont1 = 2;
printf ("%c %c", ex3[cont1++], ex3[--cont1]);
return 0;

}
// a questao esta errada, por mais que ele adicione ao count1 ele iria printar "x" e "w";