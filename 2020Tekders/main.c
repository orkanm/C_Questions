/* Write a program using while loop to calculate and print the sum of digits of a 4 digit number
 * entered by the user (assume that all values entered by the user are positive integers).
 * For example when the number entered by the user is 2315, the answer must be 11*/

#include <stdio.h>

int main()
{
int iInput = 0;
int sum = 0;

printf("Please enter a number between 1000 and 9999\n");
scanf("%d", &iInput);
if (iInput >= 1000 && iInput <= 9999)
	while(iInput > 0)
		{
			sum += iInput%10;
			iInput = iInput/10;
		}
else
	return main();

printf("%d", sum);

return 0;
}
