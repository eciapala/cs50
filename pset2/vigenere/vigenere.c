#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(int argc, string argv[1])
{
    //GET THE KEY
    string key = argv[1];
    if(argc == 2) 
    {
        for(int i = 0; i < strlen(key); i++) //ITERATION OVER THE KEY
        {
            if(isalpha(key[i]) == false) //IF KEY IS NOT ALPHABETICAL
            {
                printf("Key is not alphabetical!");
                return 1;
            }
        }    
        
        //GET THE PLAINTEXT
        printf("plaintext: ");
        string plaintext = get_string();
        if(plaintext != NULL)
        {
        //ENCIPHER, PRINT CIPHERTEXT
            printf("ciphertext: ");
            for(int j = 0, key_index = 0; j < strlen(plaintext); j++ ) //ITERATION OVER THE PLAINTEXT
            {
                    key_index = key_index % strlen(key);
                    int key_value = toupper(key[key_index]) - 65;
                    int character = 0;
                    if(isupper(plaintext[j])) //IF CHARACTER IS UPPER
                    {
                        character = (((int)plaintext[j]-65 + key_value) % 26) + 65;
                        printf("%c", (char) character);
                        key_index++;
                    }
                    else if(islower(plaintext[j])) //IF CHARACTER IS LOWER
                    {
                        character = (((int)plaintext[j]-97 + key_value)%26) +97;
                        printf("%c", (char) character);
                        key_index++;
                    }
                    else //IF CHARACTER IN PLAINTEXT IS A SPACE ' '
                    {
                        printf("%c", plaintext[j]);
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