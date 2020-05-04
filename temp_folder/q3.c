#include <stdio.h>

int teste(int n)
{
if (n <= 1) {
return n;
} else {
return teste(n-1)*2 + (teste(n-2)-1);
}
}
//aaaaaaaaaaaaa

int main() {
int i = 5;
printf(" %d", teste(i));

return 0;
}