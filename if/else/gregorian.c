int main () {
   int year;
   printf("Enter the year\n",year);
   scanf("%d", &year);
   
  int ref_year = 1900;
  int diff_year = (year - ref_year);
  int total_leap = (diff_year / 4), rem_year = (diff_year - total_leap);
   int total_days = (total_leap)*366 + (rem_year*365);
   int day = total_days % 7;
   if (day == 1)
   {
      /* code */printf("Monday\n");
   }  if (day==2)
   {
      /* code */printf("Tuesday\n");
   }  if (day==3)
   {
      /* code */printf("Wednesday\n");
   }  
   if (day==4)
   {
      /* code */printf("Thursday\n");
   }  
   if (day==5)
   {
      /* code */printf("Friday\n");
   }  
   if (day==6)
   {
      /* code */printf("Saturday\n");
   }  
   if (day==7)
   {
      /* code */printf("Sunday\n");
   }  
   return 0 ;
   
   
}