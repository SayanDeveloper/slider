#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter two integers: ");
  //Storing user input into num1 and num2
  scanf("%d %d", &num1, &num2);
  while(num1!=num2)
  {
    if(num1 > num2)
      num1 -= num2;
    else
      num2 -= num1;
  }
  printf("GCD of two entered integers is: %d",num1);

  return 0;
}
