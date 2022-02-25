#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);

    switch (age)
    {
    case 18:
        printf("the age is 18");
        break;
    
    default:
        printf("sorry");
    }
    return 0;
}
