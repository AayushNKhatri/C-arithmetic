#include <stdio.h>
#include "header.h"
#include <stdbool.h>
int cli(){
    char userInput;
    char exitCommand;
    int number1;
    int number2;
    bool running = true;
    
    while (running == true) {
      printf("Enter what operation you want to do:\n");
      printf("Enter the first number:\n");
      scanf(" %d", &number1);
      printf("Enter the second number:\n");
      scanf(" %d", &number2);
      printf("Enter the operation +, -, *, /, moduler: \n"); 
      scanf(" %c", &userInput);
    
      int result  = intCalculation(number1, number2, userInput);
      printf("%d\n", result);
      printf("Do you want to continue(Y/n):\n");
      scanf(" %c", &exitCommand);
      if(exitCommand == 'n') {
        running = false;
      }
    }
  return 0;
}
