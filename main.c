#include <stdio.h>

/**
 * * Variables -----------> e.g ->>>j
 * * data types - e.g  primitive(int, double, float, char, array)
 * * variable declaration - e.g int j
 * * variable initialization - e.g int j = 5
 * *********  RULES **********************
 * * You cannot use a variable that has not been initialize & declared
 * * int y, x;
 * * eg sum = y * x;
 * ** Operators >> Arithmetic + - / %,
 *  *************  relational > < <=
 *  ************** assignment = += -=
 *  ************** Logical && != ||
 *  ************** Conditional e.g ternary (j=j<i?0:i*i)
 *  ************** bitwise e.g ^ || >> &
 *  ************** increment & Decrement ++ --
 *
 * **** Q 4
 * * AmountSpent = scanf("%d", Amountspent)
 * * Discount is conditional -> given
 * * Discount is based on AmountSpent
 * * netAmount = AmountSpent * (100-disc)/100)
 * * 12000 * 0.9 = 10800
 *
 * Logic 2 = correct
 * * Rate Of Discount ==  take the amount * %rate given / 100
 * * 12000 * 10/100  ---   12000 * 0.1 --- 1200= rate of discount?
 * * net amount = amount spent - rate of discount
 * * netAMount = 12000 - 1200 = 10800
 *
 * */

#define ARRAY_SIZE 10

void printSquaredArrays(int values[]){
    int squaredArray[ARRAY_SIZE];
    for (int i=0;i<ARRAY_SIZE; i++){
        // Creating an Array for Values that have been squared
        squaredArray[i] = values[i] * values[i];
        //Printing out the number to be squared, and it's squared value
        printf("No to Square: %d Squared Value: %d\n", values[i], squaredArray[i]);
    }
}

int main() {
    int values[ARRAY_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    //Function call
    printSquaredArrays(values);
    return 0;
}

