#include<stdio.h>
int main()
{
        // Variables Declaration.
    float centi_meter, meter, kilo_meter;

        // Collecting length from user.
    printf("Enter the length of Centimeter : ");
    scanf("%f", &centi_meter);

        // Length Formula Declaration.
    meter = centi_meter /100.0;
    kilo_meter = centi_meter / 100000.0;

            // output or Result.
    printf("\n\tHere is the length of Meter: %.5f m \n\n", meter);
    printf("\tHere is the length of Kilo-meter: %.5f km \n", kilo_meter);

    return 0;

}
