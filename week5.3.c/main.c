#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n ;
    printf("enter the size of the matrix :");
    scanf("%d",&n);
    int m1[n][n],m2[n][n];
    input_arr(n,m1);
    input_arr(n,m2);
    int res[0][0] ={0} ;
    mul_fun(n,m1,m2,res);
    for(int i =0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
             printf("%d",res[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}

void input_arr(int n , int m[n][n])
{
    for (int i = 0 ; i <n ; i ++)
    {
        printf("enter the element of row %d\n",i+1);
        for(int j =0 ; j <n ; j ++)
        {
            printf("enter the %d element :",j+1);
            scanf("%d",&m[i][j]);
        }
    }
}




void mul_fun (int n , int m1[n][n],int m2[n][n],int res [n][n])

{
    for (int i = 0 ; i <n ; i++)


    {
        for (int j =0 ; j<n ; j++)
        {
            for (int k ; k <n ; k++)
            {
                res[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
}
