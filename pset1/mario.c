#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int h = 0; //height
    int i = 0; //rows
    int j = 0; //spaces
    int k = 0; //hashes
    do 
    {
        printf("Height:");
        h = GetInt();
        if(h == 0)
        {
            return 0;
        }
    } while (h < 1 || h > 23);
    for(int i = 0; i < h; i++) 
	{
        for(int j = 0; j < h - i - 1; j++)
        {
            printf("%s", " ");
        }
		for(int k = 0; k < i + 2; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
    return 0;
}