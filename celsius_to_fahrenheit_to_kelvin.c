#include<stdio.h>
int main()
{
        // Declare the Variables.
    float celsius, fahrenheit, kelvin;

        // Collecting the value from user.
    printf("Enter the Celsius scale Value : ");
    scanf("%f", &celsius);

        // Law declaration.
    fahrenheit = ((9 * celsius) + 160) / 5;
    kelvin = (celsius + 273);

        // Output.
    printf("\n\tThis is the Fahrenheit scale value : %.2f F\n\n", fahrenheit);
    printf("\tThis is the Kelvin scale value : %.2f K\n\n", kelvin);

    return 0;

}
