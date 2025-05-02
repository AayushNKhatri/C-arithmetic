#include "header.h"

int intCalculation (float number1 ,float number2 ,char operation){
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
    default:
      return 0;
      break;
  }
}
