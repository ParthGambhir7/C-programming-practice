#include<stdio.h>
int main()
{
    float sum,a,b,c,d,e,percentage;
    printf("Enter marks of 5 subejcts");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    sum=a+b+c+d+e;
    percentage=sum/500*100;

    printf("Total marks=%f\n",sum);
    printf("Total percentage=%f\n",percentage);

    if (percentage>=80)
    {
        printf("A Grade\n");
    }
    else if (percentage>=70)
    {
        printf("B Grade\n");
    }
    else if (percentage>=60)
    {
        printf("C Grade\n");
    }
    else if (percentage>=50)
    {
        printf("D Grade\n");
    }
    else {
        printf("Fail\n");
    }
    return 0;
}
