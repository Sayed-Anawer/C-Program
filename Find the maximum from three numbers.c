#include<stdio.h>
int main()
{
    printf("\t\tHere You have Input three number find the largest number\n\n");
   int num01,num02,num03;
   printf("\tEnter any Integer number :");
   scanf("%d", &num01);
   printf("\tEnter any Integer number :");
   scanf("%d", &num02);
   printf("\tEnter any Integer number :");
   scanf("%d", &num03);
   if (num01 > num02 && num01 > num03)

        printf("\n\n\t%d is the Largest number between Three numbers.", num01);

   else if (num02 > num01 && num02 > num03)

       printf("\n\n\t%d is the Largest number between three numbers.", num02);

   else
   {
        printf("\n\n\t%d is the Largest number between three numbers.", num03);
   }

      return 0;


}
