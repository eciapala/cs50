#include <cs50.h>
#include <stdio.h> 
int main(void)
{
    printf("minutes: ");
    int m = GetInt();
    if (m>0)
    {
        int b = (192*m)/16;
        printf("bottles: %d\n", b);
    }
    else
    {
        printf("Enter an integer\n");
    }
}