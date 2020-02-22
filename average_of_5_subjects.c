#include<stdio.h>
int main()
{           // Caption.
    printf("\t\tPlease Input your Subject mark to see the Average Number\n\n");

            //Declare the Variables.
    float math,english,cse,che,phy,total,average;

            // Here is the input collecting section.
    printf("\tEnter your Math marks : ");
    scanf("%f", &math);
    printf("\tEnter your English marks : ");
    scanf("%f", &english);
    printf("\tEnter your CSE marks : ");
    scanf("%f", &cse);
    printf("\tEnter your CHE marks : ");
    scanf("%f", &che);
    printf("\tEnter your PHY marks : ");
    scanf("%f", &phy);

            // Law Declaration.
    total = math+english+cse+che+phy;
    average = total/5;

            // This is the user Output result.
    printf("\n\t\tHere is the Total 5 Subjects mark : %.2f\n\n", total);
    printf("\t\tHere is the Average of 5 Subjects : %.2f\n", average);

    return 0;
}
