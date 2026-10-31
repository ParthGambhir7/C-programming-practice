#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter the temperature in celcius");
    scanf("%f",&celsius);
    
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in Fahrenheit=%f",fahrenheit);
    return 0;
}