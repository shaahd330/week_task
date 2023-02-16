#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 10 ;
printf("%d",i);
int *ptr = &i;
*ptr = 20 ;
printf("\n%d",i);
    return 0;
}
