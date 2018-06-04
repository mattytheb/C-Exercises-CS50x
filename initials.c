#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    //printf("Enter Name\n");
    string full_name=get_string();
    
    if (full_name!=NULL)
    {
          int first_letter = 0;
          
          while (isspace(full_name[first_letter]))                              //find the first letter
        {
            first_letter++;
        }
          
                printf("%c", toupper(full_name[first_letter]));
    
    
    for (int i = first_letter+1; i < strlen(full_name); i++)                    //rest of the letters
    {
        while(isspace(full_name[i]))
        {
           i++;
        
            if (i < strlen(full_name) && isalpha(full_name[i]))
                {
                    printf("%c", toupper(full_name[i]));
                    i++;
                }
        }
    }
    printf("\n");
}
        
    return 0;
}