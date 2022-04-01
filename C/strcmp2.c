#include <stdio.h>
#include <string.h> 

int main()
{
int a,b,c;

a = strcmp("aaa","bbb");
b = strcmp("bbb","aaa");
c = strcmp("ccc","ccc");

printf("%d\n", a);

printf("%d\n", b);

printf("%d\n", c);
}
