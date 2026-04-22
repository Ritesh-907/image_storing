#include <stdio.h>
int main()
{
	float a,b,result;
	char ch;
	printf("Enter First Number: \t");
	scanf("%f",&a);
	printf("Enter Second Number: \t");
	scanf("%f",&b);
	printf("Enter + for Addition, - for Subtraction, * for Product and / for Division: \t");
	scanf(" %c",&ch);
	switch (ch)
	{
		case '+':
			{
				result = a +b;
				printf("Sum of %.2f and %.2f is %.2f.",a,b,result);
				break;
			}
		case '-':
			{
				result = a-b;
				printf("Difference of %.2f and %.2f is %.2f.",a,b,result);
				break;
			}
		case '*':
			{
				result = a * b;
				printf("Product of %.2f and %.2f is %.2f.",a,b,result);
				break;
			}
		case '/':
			{
				if (b==0)
				{
					printf("Error. Cannot Divide by 0.");
				}
				else
				{
				result = a/b;
				printf("Division of %.2f and %.2f is %.2f.",a,b,result);
				}
				break;
			}
		default:
			{
				printf("Invalid Choice. Enter One of The Option Mentioned Above.");
			}				
	}
	
}