#include <stdio.h>
#include "header.h"
#include <stdbool.h>
int cli(){
    int userInput;
    char exitCommand;
    float number1;
    float number2;
    int result;
    bool running = true;

    while (running == true) {
      printf("Enter the first number:\n");
      if(scanf(" %f", &number1) != 1){
        printf("Please enter the number\n");
        while (getchar() != '\n');
        continue;
      };
      printf("Enter the second number:\n");
      if(scanf(" %f", &number2) != 1){
        printf("Please enter the number\n");
        while (getchar() != '\n');
        continue;
      };
      printf("Enter the operation\n _______________ \n 1. Add\n 2. Sub\n 3.Multiplication\n 4. Division\n");
      scanf(" %d", &userInput);
      if(userInput < 1 || userInput > 4){
        printf("Please Enter the valid Option\n");
      };

       switch (userInput) {
        case 1:
          result = intCalculation(number1, number2, '+');
          break;
        case 2:
          result = intCalculation(number1,number2,'-');
          break;
        case 3:
          result = intCalculation(number2, number2, '*');
          break;
        case 4:
          result = intCalculation(number1, number2, '/');
          break;
        default:
          printf("The calculation is invalid\n");
          break;
       }
      printf("%d\n", result);
      printf("Do you want to continue(Y/n):\n");
      scanf(" %c", &exitCommand);
      if(exitCommand == 'n') {
        running = false;
      }
    }
  return 0;
}
