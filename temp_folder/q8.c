#include <stdio.h>

int main(void){
    
int c, *x1, *x2;
x1 = &c;
x2 = x1;
printf("%p\n", x1);
printf("%p\n", x2);

return 0;
}