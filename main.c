
#include "stdio.h"
#include "stdlib.h"

void fibonacci(int a)
{
  // 1 1 2 3 5 8....
  printf("%d \n", 1);
  int num1 = 0;
  int num2 = 1;
  for (int i = 1; i <= a; i++)
  {
    /* code */
    int num3 = num1+num2;
    num1 = num2;
    num2 = num3;
    printf("%d \n", num3);
  }
}

int main(int argumentCount, char** arguments)
{
  char* numberText = arguments[1];
  int numberInt = atoi(numberText);

  fibonacci(numberInt);
}
