#include <stdio.h>
void main()
{
    int s1, s2, s3, s4, s5, T, P;
    printf("enter the marks of 5 subjects");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    T = s1 + s2 + s3 + s4 + s5;
    P = (T*100) / 500;
    if (P >= 70)
    {
        printf("1st");
    }
    else if (P >= 50 && P < 70)
    {
        printf("2nd");
    }
    else if (P >= 30 && P < 50)
    {
        printf("3rd");
    }
    else
    {
        printf("fail");
    }
}