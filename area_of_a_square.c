#include<stdio.h>
int main()
{
        // Declare the Variables.
    float a, area;

        // Collecting the Value from user.
    printf("Enter the Value of Side-Length : ");
    scanf("%f", &a);

        // Law Declaration.
    area = a * a ;

        // Output.
    printf("\n\tHere the Value of Square Area : %.2f\n\n", area);

    return 0;

}
