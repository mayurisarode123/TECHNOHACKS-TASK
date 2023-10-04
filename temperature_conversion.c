#include <stdio.h>
#include <conio.h>
void main() 
{
    float cel_cius;

    float fah_renheit;

    printf("enter temperature in fahrenheit\n");

    scanf("%f",&fah_renheit);

    cel_cius=(fah_renheit-32)/1.8;

    printf("temperature in celcius is %f\n",cel_cius);

    printf("enter temperature in celcius\n");

    scanf("%f",&cel_cius);

    fah_renheit=(cel_cius*9/5)+32;

    printf("temperature in fahrenheit is %f\n",fah_renheit);

    getch();
}