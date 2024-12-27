#include <stdio.h>
int main()
{
int n1;
printf("Enter Intger The Numerical Value Of N1:\t");
scanf("%d", &n1);
printf("The Intger Numerical Value Of N1 Is: %d", n1);
printf("\n");
float n2;
printf("\nEnter Float The Numerical Value Of N2:\t");
scanf("%f", &n2);
printf("The Float Numerical Value Of N2 Is: %.2f", n2);
printf("\n");
char c;
printf("\nEnter a character: ");
scanf(" %c", &c);
printf("\nThe Character Of c Is: %c", c);
return 0;
}