#include "header.h"

int intCalculation (int number1 ,int number2, char operation){
  int result;
  switch (operation) {
    case '+':
      return result = number1 + number2;
    case '-':
      return result = number1 - number2;
    case '*':
      return result = number1 * number2;
    case '/':
      return result = number1 / number2;
    case '%':
      return result = number1 % number2;
    default:
      return 0;
      break;
  }
}
