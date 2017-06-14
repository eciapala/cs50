#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if(s[i] == ' ' && i != strlen(s) - 1)
            {
                if(s[i+1] != ' ') printf("%c", toupper(s[i+1]));
            } else if(s[i] != ' ' && i == 0) printf("%c", toupper(s[i]));
        }
        printf("\n");
    }
    return 0;
}