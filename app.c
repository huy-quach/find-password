## Write a C program to read a password until it is correct. 
## For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. 
## The correct password is 1234.
#include <stdio.h>
int main() {
	int pass, x=10;	

	while (x!=0)
	{
	printf("\nInput the password: ");
	scanf("%d",&pass);	
	
	if (pass==1234)
	{
		printf("Correct password");
		x=0;
    }
    else
    {
       printf("Wrong password, try another");       
	}
	printf("\n");
   }
	return 0;
} 
