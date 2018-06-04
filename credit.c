#include<stdio.h>
#include<cs50.h>
#include <math.h>

int count(long long cc);

int first_digits(long long cc, int ck);

bool check_sum(long long cc, int digits);

int main (void)
{
    long long cc;
    
    do
    {
        printf("Enter your credit card number to validate:\n");
        cc=get_long_long();
    }
    while (cc<=0);
    
    int digits= count(cc);
    
    bool checkSum=check_sum(cc, digits);
   
    if (checkSum==false)
    {
        printf("INVALID\n");
    }
   
   else if (checkSum==true)
   {
   if (digits ==15)
   {
       int check=first_digits(cc, 15);
       
       if((check==34) || (check==37))
       {
       //printf("first digits:%i\n",check);
       printf("AMEX\n");
       }
       
       else
       {
       printf("INVALID\n");
       //printf("first digits:%i\n",check);
       }
   }
   
   else if (digits ==16)
   {
       int check=first_digits(cc, 16);
       
       if((check==51) || (check==52)|| (check==53)|| (check==54)|| (check==55))
       {
       //printf("first digits:%i\n",check);
       printf("MASTERCARD\n");
       }
       
       else  if((check==40) || (check==41)|| (check==42)|| (check==43)|| (check==44)|| (check==45)|| (check==46)|| (check==47)|| (check==48)|| (check==49))
       {
       //printf("first digits:%i\n",check);
       printf("VISA\n");
       }
       
       else
       {
       printf("INVALID\n");
       //printf("first digits:%i\n",check);
       }
   }
   
   else if (digits ==13)
   {
       int check=first_digits(cc, 13);
       
       if((check==40) || (check==41)|| (check==42)|| (check==43)|| (check==44)|| (check==45)|| (check==46)|| (check==47)|| (check==48)|| (check==49))
       {
       //printf("first digits:%i\n",check);
       printf("VISA\n");
       }
       
       else
       {
       printf("INVALID\n");
       //printf("first digits:%i\n",check);
       }
   }
   
   else
   {
   printf("INVALID\n");
   }
   }
   return 0;
}


int count(long long cc)
    {
     int digits = log10(cc) + 1;
     return digits;
    }
    
int first_digits(long long cc, int ck)
{
    int m1=ck;
    int m2=ck-2;
    long long p1=pow(10,m1);
    long long p2= pow(10,m2);
    int check=(cc%p1)/p2;
    return check;
}

bool check_sum(long long cc, int digits)
{
    int A1[digits];
  
    for(int i=0;i<digits;++i)
    {
        long long p1=pow(10,(digits-i));
        long long p2= pow(10,((digits-i)-1));
        
        A1[i]=(cc%p1)/p2;                           //put credit card digits into an array reversed
        //printf("%d\n", A1[i]);
        
    }
        
    
    //printf("Now summing even\n");
    int sum_even=0;                             //sum even digits
        for(int j=digits-1;j>=0;j=j-2)
    {
        //printf("%d\n",A1[j]);
        sum_even=sum_even+A1[j];
    }
   //printf("even sum:%i\n",sum_even);
    
    
    //printf("odd multiply by 2\n");                    //double the odd digits
    int odd_array[digits];
    int l=0;
         for(int k=digits-2;k>=0;k=k-2)
    {
        odd_array[l]=2*(A1[k]);
        //printf("%d\n", odd_array[l]);
        ++l;
    }
    
    //printf("Now the digits of the products\n");                    //sepearte out the digits
    int odd_digitArray1[(digits/2)+1];
    int odd_digitArray2[(digits/2)+1];
         for(int m=0;m<digits/2;++m)
    {
        odd_digitArray1[m]=(odd_array[m]%100)/10;
        //printf("%d\n", odd_digitArray1[m]);
        odd_digitArray2[m]=odd_array[m]%10;
        //printf("%d\n", odd_digitArray2[m]);
    }
   
    //printf("Now summing\n");
    int sum_odd=0;                             //sum odd digits
        for(int i=0;i<digits/2;++i)
    {
        sum_odd=sum_odd+odd_digitArray1[i]+odd_digitArray2[i];
    }
    //printf("odd sum:%i\n",sum_odd);
    
    int final_checkSum=sum_even+sum_odd;
    //printf("final check sum:%i\n",final_checkSum);
    
    int ans= final_checkSum%10;
    //printf("final answer:%i\n",ans);
    
    if (ans==0)
    {
    //printf("Valid Credit Card\n");
    return true;
    }
    
    else 
    {
        return false;
    }
    
}