#include<stdio.h>
int main()
{
    int num;
    printf("Enter any Integer number : ");
    scanf("%d", &num);
    if (num > 0)
        printf("\n\n\t%d is Positive Value\n\n", num);
    else if (num < 0)
        printf("\n\n\t%d is Negative Value\n\n", num);
    else if (num == 0)
        printf("\n\n\t%d is Zero \n\n", num);
    return 0;

}
