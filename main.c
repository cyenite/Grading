#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cat1,cat2,exams;

    float average;

    printf("Key in Cat1 Results:\n ");
    scanf("%d",&cat1);
    printf("Key in Cat2 Results:\n ");
    scanf("%d",&cat2);
    printf("Key in Exam results:\n");
    scanf("%d",&exams);

    average=(cat1+cat2)/2+exams;
    if(average<=100)
        {
    if(average>70)
    {
        printf("Grade is A, Total marks %f \n",average);
    }
    else if(average>=60 &average<70)
    {
        printf("Grade is B, Total marks %f \n",average);
    }
    else if(average>=50 &average<60)
    {
        printf("Grade is C, Total marks %f \n",average);
    }
    else if(average>=40 &average<50)
    {
        printf("Grade is D, Total marks %f \n",average);
    }
    else if(average>=30 &average<40)
    {
        printf("Grade is E, Total marks %f \n",average);
    }
    else
    {
        printf("You are beyond salvation\n\t\t\t prepare for a sup meanwhile NKT!!! \n\n");
    }
        }
        else{
            printf("Wrong Exam format!!!\n\n");
        }
}
