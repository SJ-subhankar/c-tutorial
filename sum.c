#include<stdio.h>
void main()
{
    int n , s = 0,p = 1 ,c;
    printf("Enter a number");
    scanf("%d",&n);

    while (n > 0){
        c = n % 10 ;
        s = s + c;
        p = p * c ;
        n = n / 10 ;
    }
    
    printf("product: %d and sum : %d",p,s); 
    return ;
}