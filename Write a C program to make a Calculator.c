#include <stdio.h>

int main()


{
    double num1,num2;

    char oper;

    printf("Enter two numbers : ");
    scanf("%lf %lf",&num1,&num2);




    print("Enter an operator (+,-,*,/) :");
    scanf("%c",&oper);


    switch (oper)

    {
    case '+' :
    {
        printf("%lf + %lf = %lf\n",num1,num2,num1+num2);

        break;
    }

    case '-' :
    {
        printf("%lf - %lf = %lf\n",num1,num2,num1-num2);

        break;
    }


    case '*' :
    {
        printf("%lf * %lf = %lf\n",num1,num2,num1*num2);

        break;
    }



    case '/' :
    {
        printf("%lf / %lf = %lf\n",num1,num2,num1/num2);

        break;
    }

    default:
    {
        printf("Not a valid operator\n");

    }

    }




    return 0;
}


































