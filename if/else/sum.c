#include<stdio.h>



int main () {
int num, c, sum = 0;
printf("Enter the 5 digit number\n", num);
scanf("%d", &num);

while(num>0) {
 c = num % 10;
 sum = sum + c;
 num = num / 10;

}
printf("%d",sum);






return 0;
}
