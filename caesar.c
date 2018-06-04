#include<ctype.h>
#include<cs50.h>
#include<stdio.h>
#include<string.h>



int main(int argc, string argv[])
{
    if(argc !=2)
    {
        printf("error, enter salt\n");
        return 1;
    }
    
    else
    {
        int key = atoi(argv[1]);
        
        printf("plaintext:");
        string plaintext=get_string();
        
        printf("Enter Message:");

        for (int i = 0, n = strlen(plaintext); i < n; i++)
            {
                if (isalpha(plaintext[i])==false)
                {
                    printf("%c", plaintext[i]);
                }
                
                else if(isupper(plaintext[i]))
                {
                    int a=plaintext[i];
                    int b=a-65;
                    int c=(b+key)%26;
                    int d=c+65;
                    printf("%c",d);
                }
                
                else if(islower(plaintext[i]))
                {
                     int a=plaintext[i];
                    int b=a-97;
                    int c=(b+key)%26;
                    int d=c+97;
                    printf("%c",d);
                }
            }
        
        printf("\n");
        //printf("%i\n",key*500);

        return 0;
        


    }
    
    
    
    
    
    
    
    
    
}
