#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2;
    char oper;

    do
    {
        printf("\t\tSimple Progressive Calculator\n\n");

        printf("Available Operations\n");
        printf("'+' : addition\n");
        printf("'-' : subtraction\n");
        printf("'*' : multiplication\n");
        printf("'/' : division\n");
        printf("'%%': remainder of the division\n");

        printf("\nEnter the expression in the form: num1 -> operator -> num2\n");
        printf("Examples: 1 + 1, 2 - 2, 3 * 3, or 4 / 4 \n");
        printf("To exit, type: 0 0 0 \n");

        scanf("%f", &num1);
        scanf("%c", &oper);
        scanf("%f", &num2);

        system("cls || clear");

        printf("Calculating: %.2f %c %.2f = ", num1, oper, num2);

        switch (oper)
        {
        case '+':
            printf("%.2f\n\n", num1 + num2);
            break;

        case '-':
            printf("%.2f\n\n", num1 - num2);
            break;

        case '*':
            printf("%.2f\n\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%.2f\n\n", num1 / num2);
            else
                printf("Division by 0 is not allowed\n\n");
            break;

        case '%':
            printf("%d\n\n", (int)num1 % (int)num2);
            break;

        default:
            if (num1 != 0 && oper != '0' && num2 != 0)
                printf("Invalid Operator\n\n");
            else
                printf("Closing Calculator\n");
        }
    } while (num1 != 0 && oper != '0' && num2 != 0);
    return 0;
}