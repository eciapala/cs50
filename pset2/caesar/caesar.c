#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main (int argc, string argv[1])
{
    if(argc == 2)
    {
        printf("plaintext: ");
        string plaintext = get_string(); //plaintext  - text to crypt
        //string ciphertext;               //ciphertext - crypted text
        //CONVERT STRING TO INT
        string k = argv[1];
        int key = atoi(k) % 26;         // key - number o rotated posiotions
        //ENCIPER FUNCTION
        if(plaintext != NULL)
        {
            printf("ciphertext: ");
            for(int i = 0, n=strlen(plaintext); i < n; i++)
            {
                int character = 0;
                if(isupper(plaintext[i])) //upper letters
                {
                    character = (((int)plaintext[i]-65+key)%26)+65;
                    printf("%c", (char)character);
                }
                else if(islower(plaintext[i]))                 //lower letters
                {
                    character = (((int)plaintext[i]-97+key)%26)+97;
                    printf("%c", (char)character);
                }
                else                   //rest
                {
                    printf("%c", plaintext[i]);
                }
            }
        printf("\n");
        }
        
    }
    else
    {
        printf("Invalid key.\n");
        return 1;
    }
 
    return 0;
}