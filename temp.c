#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    float kelvin;
    printf("Inserisci temperatura in celsius\n");
    scanf("%d" , &celsius);
    fahrenheit = 9/5*celsius+32;
    kelvin = celsius+273.15;
    if(celsius < -273.15)
    {
        printf("Errore\n");
    
    }

    else
    {
        printf("Temperatura in fahrenheit:%f\n Temperatura in kelvin:%f", fahrenheit, kelvin);

    }
    return(0);




}
