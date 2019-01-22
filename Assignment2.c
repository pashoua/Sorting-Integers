#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*This program can take in 100 numbers or less and sort them
in ascending or descending order.
Author: Paty Vang
*/

int sequenceEntered[100]; //User can only enter 100 numbers total.
char order; //Order of numbers that the user wants - ascending or descending.

//This is a swap function that is used by the sort function
void swap (int *one, int *two){
    int hold;
    hold = *one;
    *one = *two;
    *two = hold;
}
//This function takes in numbers from user and puts it into an array sequence.
int sequenceAcceptor()
{
    int numEntered; //Variable to assign the number that user enters.
    int count = 0; //Keeps a count of how many numbers are entered.
    int i = 0; //Iterator set to "0."

    //Asks user to enter number and stores into initial array.
    printf("Enter a sequence of numbers. Type a 0 to end the sequence.\n");
    for (i=0; i<100; i++){
        scanf("%i", &numEntered);
        if (numEntered > 0){
       sequenceEntered[count++] = numEntered;
        }
     else {
        break;
        }
    }}

//This function sorts the sequence of numbers
void sort(int array[], int size, char order){
    int i, j;
    char choice = 'a';

    if (order == choice){
        for (i = 0; i < size-1; i++)
            for (j = 0; j < size-i-1; j++)
                if (array[j] > array[j+1])
                    swap(&array[j], &array[j+1]);
    }
    else {
        for (i = 0; i < size; ++i)
            {for (j = i + 1; j < size; ++j)
                {if (array[i] < array[j])
                    {swap(&array[j],&array[i]);
                    }
                }
            }
        }
}

//The main function prints out the ordered sequence of numbers.
int main()
{
    sequenceAcceptor();
    printf("Enter the letter a for ascending order and d for descending: ");
    scanf("%s", &order);
    //Sorts out the list in the sequence selected.
    int length = sizeof(sequenceEntered)/sizeof(sequenceEntered[0]);
    sort(sequenceEntered, length, order);

    //Prints out the list of numbers.
    for(int i = 0; i < length;i++ ){
        if(sequenceEntered[i] == 0){
            i++;
        }
        else {
            printf(" %i",sequenceEntered[i]);}

    }

    return 0;
}
