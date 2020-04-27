#include<stdio.h>

int main()
{
  int number1, number2, sum;
  printf("Input two numbers: ");
  scanf("%d %d",&number1, &number2);

  sum = number1+number2;
  printf("The sum of two inputs is %d.\n", sum);

  return 0;

}

