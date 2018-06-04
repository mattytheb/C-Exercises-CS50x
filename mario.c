#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int height;
    int space;
    int hash;
    
  
    do
    {
        printf("How high would you like your pryamid? (Between 0 and 23)\n");
        height=get_int();
    }
    while(height<0&& height>23);
    
        space=height-1;
        hash=1;
     
       for (int i=0; i<height;i++)
       {
           //printf("%i",i);
           for(int j=0;j<space;j++)
                {
                    printf(" ");
                }
            for(int k=0;k<hash;k++)
                {
                    printf("#");
                }
            printf("  ");
            for(int l=0;l<hash;l++)
            {
                printf("#");
            }
                printf("\n");
                space--;
                hash++;
       }
            
   
  
    
}