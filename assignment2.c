#include <stdio.h>

/**QUESTION 1:
 * Write a program that computes and prints the squares of 10 numbers
 * from 1-10. The program should include an array
 * containing all the values that have been squared.
 * Output should show the number and its square.(7 MARKS)
 **/

#define ARRAY_SIZE 10
void printSquaredArrays(int values[]){
    int squaredArray[ARRAY_SIZE];
    for (int i=0;i<ARRAY_SIZE; i++){
        // Creating an Array for Values that have been squared
        squaredArray[i] = values[i] * values[i];
        //Printing out the number to be squared, and it's squared value
        printf("No to Square: %d Squared #: %d\n", values[i], squaredArray[i]);
    }
}
int main() {
    int values[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    //Function call
    printSquaredArrays(values);
    return 0;
}