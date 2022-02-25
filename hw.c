#include <stdio.h>
void main()
{
    
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
     printf("a is greatest number");
    else if(b>a&&b>c)
     printf("b is the greatest number");
    else if("c>a&&c>b")
    printf("c is the greatest number");
}