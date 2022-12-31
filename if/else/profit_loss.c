#include<stdio.h>
int main () {
   int cp, sp;
   printf("Enter the cost price\n");//
   scanf("%d", &cp);

   printf("Enter the selling price\n");
   scanf("%d", &sp);
int profit = sp - cp, loss = cp - sp;
   if (profit > 0)
   {
     printf("You made a profit of %d", profit);
    }   else {
printf("You made a loss of Rs %d", loss);
    }
   return 0;
}