#include<stdio.h>
#include<conio.h>

main() {

int principle, time;
float rate, simple_interest;

clrscr();

 printf("Calculate the simple interest.\n\n");
 printf("Enter the amount:-");
 scanf("%d", &principle);
 printf("\n\nEnter the Interest Rate:- ");
 scanf("%f", &rate);
 printf("\n\nEnter the time (in years):- ");
 scanf("%d", &time);
 simple_interest=principle*rate*time/100;
 printf("\n\nYour annual simple interest is %.2f.\n\n", simple_interest);
 printf("Thank you.");



getch();

}