#include <stdio.h>
#include <stdlib.h>
void Bub_Soort(int a[],int len);

int main()
{
    int a[]= {1,3,7,9,0,2,4,5,8,6};
    int len = 10 ;
    Bub_Soort(a,len);
    for (int i =0 ; i <len ;i ++)

    {
        for (int j =0 ;j <(len -1);j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for (int i =0 ; i <len ; i ++)
    {
        printf("%d",a[i]);

    }
    return 0;
}



void Bub_Soort(int a[],int len)
{
    for (int i =0 ; i <len ;i ++)

    {
        for (int j =0 ;j <(len -1);j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

}
