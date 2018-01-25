#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    float temp;
    char grad = 0;
    if(argc == 3)
        grad = *argv[2];
    temp = atof(argv[1]);
    if(argc == 2 || grad == 'C' || grad == 'c' || !grad)
    {
        if(argc == 2 || !grad)
            printf("If temperature - Celsium: %.2f C\n", temp);
        if(temp <= -273.15)
            printf("Low than 0");
        else
            printf("%.2f F\n%.2f K\n\n", 32.0 + temp*9.0/5.0, temp + 273.15);
    }
    if(argc == 2 || grad == 'F' || grad == 'f' || !grad)
    {
    if(argc == 2 || !grad)
        printf("If temperature - Fahrenhei: t%.2f F\n", temp);
    if(temp <= -459.4)
        printf("Low than 0");
    else
        printf("%.2f C\n%.2f K\n\n", (temp - 32.0)*5.0/9.0, (temp - 32.0)*5.0/9.0 + 273.15);
    }
    if(argc == 2 || grad == 'K' || grad == 'k' || !grad)
    {
        if(argc == 2 || !grad)
            printf("If temperature - Kelvin: %.2f K\n", temp);
        if(temp <= 0.15)
            printf("Low than 0");
        else
            printf("%.2f C\n%.2f F\n\n", temp - 273.15, 32.0 + (9.0/5.0)*(temp - 273.15));
    }
    return 0;
}
