#include <stdio.h>
int main()
{

    int number1, number2, sum , mult ,div,sub;

    printf("enter the number1  ");
    scanf("%d", &number1);

    printf("enter the number2 ");
    scanf("%d", &number2);

    sum = number1 + number2;
    mult = number1 * number2;
    div = number1 / number2;
    sub = number1 - number2;

    printf("sum is = %d\n",sum );
    printf("mult = %d\n",mult);
    printf("div = %d\n",div);
    printf("sub = %d\n",sub);

    return 0;
}