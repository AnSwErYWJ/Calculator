/*************************************************************************
> File Name: calculator.c
> Author: AnSwEr
> Mail: 1045837697@qq.com
> Created Time: 2015年06月05日 星期五 16时08分35秒
************************************************************************/

#include<stdio.h>
#include<stdlib.h>

/*两个操作数以及一个操作符*/
static double num1=0.0;
static double num2=0.0;
static char operation=0;

/*操作数和操作符的输入*/
void input(double *num1,double *num2,char *operation)
{
    printf("Please enter the calculation:\n");
    printf("Your input:\n");
    scanf("%lf%c%lf",num1,operation,num2);
    //fflush(stdin);//gcc不支持这个函数
    while(getchar() != '\n')
    continue;
}

/*计算函数*/
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
        printf("\aError:Davision can not be zero!\n");
        else
        printf("Result:\n%lf / %lf = %lf\n",num1,num2,num1/num2);
        break;
        /*%c操作只能对整数进行，所以类型转换为long*/
        case '%':
        if((long)num2 == 0)
        printf("\aError:Davision can not be zero!\n");
        else
        printf("Result:\n%ld %% %ld = %ld\n",(long)num1,(long)num2,(long)num1%(long)num2);
        break;
        default:
        printf("Usage:Input should be as num1operationnum2.\n");
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
        printf("Please enter your choice(c or q):");
        fflush(stdin);
        scanf("%c",&choice);
        while(getchar() != '\n')
        continue;
        switch(choice)
        {
            case 'c':
            input(&num1,&num2,&operation);
            calc_output(num1,num2,operation);
            break;
            case 'q':
            printf("-------------------------------\n");
            printf("\n#################################################\n");
            printf("Bye!\n\n");        
            exit(0);
            default:
            printf("Error:Your choice is error!\n");
            break;
        }
        printf("-------------------------------\n");
    }
    return 0;
}
