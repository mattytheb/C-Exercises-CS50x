/**
 * Matthew Ian Barker 11th May. Last one of this unit

 */
       
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;


int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./copy file\n");
        return 1;
    }
    
    char *infile = argv[1];
    
    // open input file 
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", infile);
        return 2;
    }
    
    BYTE buffer[512];
    int jpg_name=0;
    FILE* temp = NULL; 
    
    while (!feof(inptr))
        {
            //fread(buffer, 512, 1, inptr);
            //printf("512 block opened\n");
            
            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] == 0xe0 || buffer[3] == 0xe1))
            {
                  if (temp != NULL)
                    {
                        fclose(temp);
                    }
                    
                char filename[8];
                sprintf(filename, "%03d.jpg", jpg_name);
                temp = fopen(filename, "w");
                jpg_name++;
                
                fwrite(buffer, 512, 1, temp);
            }
            
            else if (jpg_name > 0)
                {
                    fwrite(buffer, 512, 1, temp);            
                }
      
        fread(buffer, 512, 1, inptr);
        
                }
        
        //printf("file closed\n");
        
         // close the file
            fclose(inptr);

         // that's all folks
            return 0;
}