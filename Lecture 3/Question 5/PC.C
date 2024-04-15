#include<stdio.h>
#include<conio.h>

main() {

int radius;
float pi = 3.14, perimeter_of_circle;

clrscr();

 printf("Calculate the perimeter of the circle.\n\n");
 printf("Enter the radius of the circle:- ");
 scanf("%d", &radius);
 perimeter_of_circle=2*pi*radius;
 printf("\n\nThe perimeter of the circle is %.2f\n\n", perimeter_of_circle);
 printf("Thank you.");

getch();

}