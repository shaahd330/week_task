#include <stdio.h>
#include <stdlib.h>
#define NULL ((void*)0)

int main()
{
  int *a = (int*)malloc(sizeof(int)*5);

  for(int i =0 ; i<5 ;i ++) a[i]=i;
  for (int i =0 ; i<5 ; i++) printf("%d",a[i]);

  printf("\n");

  a= realloc(a,sizeof(int)*7);

  for(int i =5 ; i<7 ;i ++) a[i]=i;
  for ( int i =0 ; i<7; i++) printf("%d",a[i]);



a = NULL ;

  free(a);


    return 0;
}
