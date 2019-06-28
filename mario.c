#include <cs50.h> 
#include <stdio.h>

int main(void)
{
     int Height;
    
    do{
     Height = get_int("what is the height of you piramid?(range of 1-8 only): ");
    }while(Height<=0 || Height>=9);
   
    for(int spaces=Height-1,hashtags=1; spaces>=0; spaces--, hashtags++){
     //spaces for the piramid  
        
     for(int i=1; i<=spaces;i++){
         printf(" ");
     }
        //hastags
        for(int j=1;j<=hashtags;j++){
            printf("#");
        }
        //space in the middle
        printf(" ");   
           //hastags
        for(int j=1;j<=hashtags;j++){
            printf("#");
           }
     printf("\n");     
    }
    }
    

