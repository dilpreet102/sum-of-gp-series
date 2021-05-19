#include<stdio.h>
#include<math.h>

int main()
{
    int a, n, r;
    float sum = 0;
    
    printf(" Enter First Number of G.P Series:  ");
    scanf("%d", &a);
    printf(" Enter the Total Numbers in G.P Series:  ");
    scanf("%d", &n);
    printf(" Enter the Common Ratio:  ");
    scanf("%d", &r);
    
    sum = (a * (1 - pow(r, n ))) / (1- r);
    printf("Sum of GP series= %f",sum);  
    return 0;
}