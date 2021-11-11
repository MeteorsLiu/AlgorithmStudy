#include <stdio.h>


int main(void) {

    int max;
    int a,b,c;
    //Grab the input value
    printf("请输入：");
    scanf("%d,%d,%d", &a, &b, &c);


    if (a > b) { // Compare a and b
        max = (a > c) ? a : c; // If so,Compare a and c.
    } else if (b > c) { //Otherwise, a < b.Continue to compare b and c.
       max = b; 
    } else { //Final result: Only one possible : c is greatest
        max = c;
    }

    printf("%d",max);



}