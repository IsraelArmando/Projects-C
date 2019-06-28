#include <stdio.h>
#include <cs50.h>

//This program validates if a credit card is valid or invalid. if valid then the program will tell the company of the credit card.

int main(void) {
		
		long card;


		do{	
				 card = get_long("Insert your credit card number:\n");
	}
	while(card < 1 || card > 9999999999999999l);
	
	

		long n = card;  // Make a copy of the 'card' to be used and modified throughout the process.
	
		int sum = 0;
		int count = 0;// Keep track of the amount and position of each digit using variable 'count'.
	        int digit; // Isolate every digit from the credit card number using a loop and the variable 'digit'.
                int digit1; // Isolate every digit from the credit card number (until the seconds numbers) using a loop and the variable 'digit1'.
	
	
// Apply Luhn's algorithm using 'while' loop.
	
		while(n>0)
		{	
		digit = n % 10;
		     count++;
		 
		if (count % 2 != 0 ){
			sum = sum + digit;
		}
			else if (digit < 5 ){
			sum = sum + (2 * digit);
		}
			else{
		sum = sum + (2 * digit) - 9;
		}
		
		n = (n - digit) / 10;
		}
	// Make a copy of 'card' and isolate the first two digits (secondsNumbers) using the variable digit1. 


	long secondsNumbers = card;
		while (secondsNumbers > 100 )
		{
			digit1 = secondsNumbers %10;
			secondsNumbers = (secondsNumbers - digit1) / 10;			
		}
	 /* Checking the validity of the number according to Luhn's algorithm; if valid
	 print the type of credit card depending on the secondsNumbers of the credit card and amount of digits.*/
	
/* If the number entered doesn't have the right amount of digits according
 to variable 'count' or doesn't have the right 'secondsNumbers', declare the number as invalid.*/


		if(sum % 10 == 0) 
		{
                if((count == 13 || count == 16) && (secondsNumbers >= 40 && secondsNumbers <= 49))
		{
		 printf("VISA\n");
		}
		else if((count == 16) && (secondsNumbers > 50 && secondsNumbers < 56))
		{
		printf("MASTERCARD\n");
		}else if((count == 15) && (secondsNumbers == 34 || secondsNumbers == 37)) 
		{
			printf("AMEX\n");
		}
			else
		{
			printf("INVALID\n");
        }
}       
                  else 
		  {
				printf("INVALID\n");
                  }
}




