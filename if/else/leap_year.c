
#include<stdio.h>
int main () {

   int year;
 
   printf("Enter any year\n", year);
 //
   scanf("%d", &year);
  
   if (year % 4 == 0)
  
   {
  
       /* code */printf("%d is a leap year\n", year);
  
   }
   
   else{
  
       printf("%d is not a leap year\n", year);
  
   }
  
   return 0;

}