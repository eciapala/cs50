#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <unistd.h>
#include <crypt.h>
#define _XOPEN_SOURCE


int main(int argc, string argv[])
{
  
    if(argc == 2) //proper command-line
    {
        //BRUTFORCE KEY GENERATOR
        //no loger than 4 characters
        //only alphabetical characters
        char key[4];
        char salt[2];
        char *hash;
        for(char a = 'A'; a <= 'z'; a++) //first letter
        {
            if(a == '[') a = 'a';            
            for(char b = 'A'; b <= 'z'; b++ ) //second letter
            {
                if(b == '[') b = 'a';
                for(char c = 'A'; c <= 'z'; c++) //third letter
                {
                    if(c == '[') c = 'a';
                    for(char d = 'A'; d <= 'z'; d++) //fourth letter
                    {
                        if(d == '[') d = 'a';
                        snprintf(key, 4, "%s%s%s%s", &a, &b, &c, &d);
                        for(char i = '.'; i <= 'z'; i++)
                        {
                            if(i == ':') i = 'A';else if(i == '[') i = 'a';
                            for(char j = '.'; j <= 'z'; j++)
                            {
                                if(j == ':') j = 'A';else if(j == '[') j = 'a';
                                snprintf(salt, 2, "%s%s", &i, &j);
                                hash = crypt(key,salt);
                                printf("%s", hash);
                                //if(strcmp(crypt(key, salt), argv[1]) == 0) printf("%s", key);
                            }
                        }
                    }       
                }
            }
        }
        printf("\n"); 
    } 
    else //wrong command line
    {
        printf("Error!\n");
        return 1;
    }
    return 0;
}