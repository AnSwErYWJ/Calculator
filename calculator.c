/*************************************************************************
	> File Name: calculator.c
	> Author: AnSwEr
	> Mail: 1045837697@qq.com
	> Created Time: 2015年06月05日 星期五 16时08分35秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

static double num1=0.0;
static double num2=0.0;
static char operation=0;
void input(double *num1,double *num2,char *operation)
{
    printf("Please enter the calculation:\n");
    printf("Your input:\n");
    scanf("%lf%c%lf",num1,operation,num2);
    fflush(stdin);
}

void calc_output(const double num1,const double num2,const char operation)
{

    switch(operation)
    {
        case '+':
            printf("Result:\n%lf + %lf = %lf\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("Result:\n%lf - %lf = %lf\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("Result:\n%lf * %lf = %lf\n",num1,num2,num1*num2);
            break;
        case '/':
            if(num2 == 0)
                printf("\aUsage:Davision can not be zero!\n");
            else
                printf("Result:\n%lf / %lf = %lf\n",num1,num2,num1/num2);
            break;
        case '%':
            if((long)num2 == 0)
                printf("\aUsage:Davision can not be zero!\n");
            else
            printf("Result:\n%ld %% %ld = %ld\n",(long)num1,(long)num2,(long)num1%(long)num2);
            break;
        default:
            printf("Usage:Your input is error,retry to enter the calculation.\n");
            break;
    }
}
int main(int argc,char *argv[])
{
    char choice=0;
    printf("\n###################Calculator####################\n");
    printf("Welcome to my calculator!\n");
    printf("Choice:\n");
    printf("c) Calc\n");
    printf("q) Exit\n");
    while(1)
    {
    printf("\n-------------------------------\n");
    printf("Please enter your choice:");
    scanf("%c",&choice);
    fflush(stdin);
    switch(choice)
    {
        case 'c':
            input(&num1,&num2,&operation);
            calc_output(num1,num2,operation);
            break;
        case 'q':
            exit(0);
            break;
        default:
            printf("Usage:Your choice is error!\n");
            break;
    }
    printf("-------------------------------\n");
    }
    printf("#################################################\n");
    printf("Bye!\n\n");
    return 0;
}
