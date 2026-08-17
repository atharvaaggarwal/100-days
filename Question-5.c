Q5: Write a program to convert temperature from Celsius to Fahrenheit. in c compliler 
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32
  
Input 2:
100
Output 2:
Fahrenheit=212
  
  include<stdio.h>
  int main(){
    float celcius, faranite;
    printf("please enter the value of celcius");
    scanf("%f",& celcius);
    farenhite = (celcius*9/5) +32;
    printf("farenite=%.0f, farenhite");
    return 0;
}
