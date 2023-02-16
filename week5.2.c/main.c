#include <stdio.h>
#include <stdlib.h>
void add(int x , int y , int *ptr );


int main()
{
    int i , j , sum ;


    printf("please enter the frist variable :");
    scanf("%d",&i);
       printf("please enter the second variable :");
    scanf("%d",&j);
   add(i , j ,&sum);
   printf("the sum is %d",sum);

    return 0;
}


void add(int x , int y , int *ptr )
{
    *ptr = x + y ;
}
