#include <stdio.h>


int main(void) {
  //About the process
  //There is no necessity comparing the numbers for 6 times.
  //Only 3 times is enough!

  //And we don't need to use some High level algorithm to sort it
  //Becase we only need to sort four numbers
  //Declare a array whose length is 4.

  //Declare 4 var for storing numbers
  int numbers[4];
  //For storing the numbers temporarily
  int temp, last;

  printf("请输入:");
  scanf("%d,%d,%d,%d", & numbers[0], & numbers[1], & numbers[2], & numbers[3]);
  for (int i = 0; i < 3; i++) { //Bubble Algorithm
    for (int j = 0; j < 3 - i; j++) {   // A specific item(a or b or c) compare to the next one
      if (numbers[j] > numbers[j + 1]) { // Exchange if the current item is greater than the next one
        temp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }

    }
  }

  printf("%d\t%d\t%d\t%d", numbers[0], numbers[1], numbers[2], numbers[3]);

}