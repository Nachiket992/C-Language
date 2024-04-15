#include<stdio.h>
#include<conio.h>

main() {

int width, height, area_of_rectangle;

clrscr();

 printf("Calculate the area of the rectangle.\n\n");
 printf("Enter the width of the rectangle :- ");
 scanf("%d", &width);
 printf("\nEnter the height of the rectangle :- ");
 scanf("%d", &height);
 area_of_rectangle=width*height;
 printf("\nThe area of the rectangle is %d.\n\n", area_of_rectangle);
 printf("Thank you.");

getch();

}