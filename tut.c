#include <stdio.h>

int main()
{
    int num, i=0;
    printf("enter a num\n");
    scanf ("%d",&num);
    do
    {
        printf("%d\n",i);
       i=i+1;
    } while (i<num);
     return 0;
}
