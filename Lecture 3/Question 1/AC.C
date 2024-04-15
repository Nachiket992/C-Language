#include<stdio.h>
#include<conio.h>

main() {

float pi = 3.14;
int radius;
float area_of_circle;

clrscr();

 printf("Calculate the area of the circle.\n\n");
 printf("Enter the value of radius :- ");
 scanf("%d", &radius);
 area_of_circle=pi*radius*radius;
 printf("Area of the circle is %f.\n\n", area_of_circle);
 printf("Thank you.");

getch();

}