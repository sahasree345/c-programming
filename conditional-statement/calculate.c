//write a c-programm to calculate sum of two numbersif the users enter+, difference of two numbers product of two numbers
#include<stdio.h>
int main() {
float no1,no2;
char operator;
printf("enter no1:");
scanf("%f",&no1);
printf("enter no2:");
scanf("%f",&no2);
printf("enter the operator:");
scanf("\n%c", &operator);
if(operator=='+'){
printf("sum=%f",no1+no2);
}
else if(operator=='-') {
printf("difference=%f",no1-no2);
}
else if(operator=='*') {
printf("product=%f",no1*no2);
}
else if(operator=='/') {
printf("quotient=%f",no1/no2);
}
else{
printf("please input valid number:");
}
return 0;
}
