#include<stdio.h>
int main()
{           // Caption.
    printf("\t\t Here you find the Triangle area by given their values only\n");

            //Declare the Variables.
    float surface,height,area;

            // Here is the input collecting section.
    printf("\n\tEnter the value of Surface : ");
    scanf("%f",&surface);
    printf("\tEnter the value of Height : ");
    scanf("%f",&height);

            // Law Declaration.
    area= 0.5 * surface * height;

            // This the user Output result.
    printf("\n\t\tHere is the Triangle of Area : %.2f\n", area);

    return 0;



}
