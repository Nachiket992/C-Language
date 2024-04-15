#include<stdio.h>
#include<conio.h>

main() {

int height, base;
float area_of_triangle;

clrscr();

 printf("Caculate the area of the triangle.\n\n");
 printf("Enter the height of the triangle:- ");
 scanf("%d", &height);
 printf("\n\nEnter the base of the triangle:- ");
 scanf("%d", &base);
 area_of_triangle=0.5*height*base;
 printf("\n\nThe area of the triangle is %.2f.\n\n", area_of_triangle);
 printf("Thank you.");

getch();

}