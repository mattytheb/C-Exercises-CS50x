#define _XOPEN_SOURCE
#include <unistd.h>
#include<ctype.h>
#include<cs50.h>
#include<stdio.h>
#include<string.h>




int main(int argc, string argv[])
{
    if(argc !=2)
    {
        printf("./crack hash\n");
        return 1;
    }
    
    else
    {
        string hash = argv[1];
        string salt="50";

        //printf("%s\n",crypt(hash,"50"));
        
        //printf("The hash is: %s\n", hash);
        //printf("The salt is: %s\n", salt);
        
        char test[2];                                       //test for one character
        
        for (int i = 'A'; i <= 'z'; i++)
        {
            test[0] = (char) i;
            test[1] = '\0';
            
            int result = strcmp(hash, crypt(test,salt));
           
              if (result==0)
            {
                //printf("CRacked!\n");
                printf("%s\n",test);
                return 0;
                
            }
            
        }
        
          char test2[3];                                       //test for two characters
            test2[0] = 'A';
            test2[1] = 'A';
            test2[2] = '\0';
            
        for (int i = 'A'; i <= 'z'; i++)
        {
            test2[0] = (char) i;
           
            int result2 = strcmp(hash, crypt(test2,salt));
           
              if (result2==0)
            {
                //printf("CRacked!\n");
                printf("%s\n",test2);
                return 0;
                
            }
            
                for(int j='A';j<='z';j++)
                {
                     test2[1] = (char) j;
           
                        int result21 = strcmp(hash, crypt(test2,salt));
           
                             if (result21==0)
                            {
                                 //printf("CRacked!\n");
                                 printf("%s\n",test2);
                                    return 0;
                
                            }
                }
            
        }
    
        
        
         char test3[4];                                       //test for three characters
            test3[0] = 'A';
            test3[1] = 'A';
            test3[2] = 'A';
            test3[3] = '\0';
            
        for (int i = 'A'; i <= 'z'; i++)
        {
            test3[0] = (char) i;
           
            int result3 = strcmp(hash, crypt(test3,salt));
           
              if (result3==0)
            {
                //printf("CRacked!\n");
                printf("%s\n",test3);
                return 0;
                
            }
            
                for(int j='A';j<='z';j++)
                {
                     test3[1] = (char) j;
           
                        int result32 = strcmp(hash, crypt(test3,salt));
           
                             if (result32==0)
                            {
                                 //printf("CRacked!\n");
                                 printf("%s\n",test3);
                                    return 0;
                
                            }
                            
                            for(int k='A';k<='z';k++)
                {
                     test3[2] = (char) k;
           
                        int result321 = strcmp(hash, crypt(test3,salt));
           
                             if (result321==0)
                            {
                                 //printf("CRacked!\n");
                                 printf("%s\n",test3);
                                    return 0;
                
                            }
                    }
            
             }
    
        }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
           char test4[5];                                       //test for three characters
            test4[0] = 'A';
            test4[1] = 'A';
            test4[2] = 'A';
            test4[3] = 'A';
            test4[4] = '\0';
            
        for (int i = 'A'; i <= 'z'; i++)
        {
            test4[0] = (char) i;
           
            int result4 = strcmp(hash, crypt(test4,salt));
           
              if (result4==0)
            {
                //printf("CRacked!\n");
                printf("%s\n",test4);
                return 0;
                
            }
            
                for(int j='A';j<='z';j++)
                {
                     test4[1] = (char) j;
           
                        int result43 = strcmp(hash, crypt(test4,salt));
           
                             if (result43==0)
                            {
                                 //printf("CRacked!\n");
                                 printf("%s\n",test4);
                                    return 0;
                
                            }
                            
                            for(int k='A';k<='z';k++)
                {
                     test4[2] = (char) k;
           
                        int result432 = strcmp(hash, crypt(test4,salt));
           
                             if (result432==0)
                            {
                                 //printf("CRacked!\n");
                                 printf("%s\n",test4);
                                    return 0;
                
                            }
                            
                            for(int l='A';l<='z';l++)
                {
                     test4[3] = (char) l;
           
                        int result4321 = strcmp(hash, crypt(test4,salt));
           
                             if (result4321==0)
                            {
                                 //printf("CRacked!\n");
                                 printf("%s\n",test4);
                                    return 0;
                
                            }
                    }
                    }
            
             }
    
        }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    }
}