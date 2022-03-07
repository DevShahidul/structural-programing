#include <stdio.h>
int main(){
    int arr[] = {8, 5, 9, 4, 7, 2, 3, 6},
    i, 
    min = arr[0], 
    max = arr[0], 
    sumOfOddNum = 0, 
    sumOfEvenNum = 0,
    lengthOfArray = sizeof(arr) / sizeof(arr[0]);

    printf("Total length of array is: %d\n", lengthOfArray); //Check length number of arr[]
    
    // Beginning of loop function
    for(i=0; i<lengthOfArray; i++){

        // Get minimum number
        if(arr[i] < min){
            min=arr[i];
        }

        // Get maximum number
        if(arr[i] > max){
            max=arr[i];
        }

        // Get sum of even number
        if(arr[i] % 2 == 0){
            sumOfEvenNum+= arr[i];
        } else { // Get sum of odd number
            sumOfOddNum+= arr[i];
        }

    } // End of the loop function

    printf("Min number is: %d\n", min);
    printf("Max number is: %d\n", max);
    printf("Total Even number is: %d\n", sumOfEvenNum);
    printf("Total Odd number is: %d\n", sumOfOddNum);

    // Check if total odd number is greater than or less than of total even number and addition with max or max number from the array.
    if(sumOfOddNum > sumOfEvenNum){
        sumOfOddNum+=max;
        printf("Total sum of odd number after addition with {%d} maximum number: %d\n", max, sumOfOddNum);
    }else if(sumOfEvenNum > sumOfOddNum){
        sumOfEvenNum+=min;
        printf("Total sum of even number after addition with {%d} minimum number is: %d\n", min, sumOfEvenNum);
    }

    return 0;
}




// Exam date 15th Feb 8.00 Pm

// Home work
// Get sum for all odd number and even number from the array;  >> Done
// If the sum of the odd is greater than of total even number then do addition total odd number with the max number from the array 
// If the sum of the odd is less than of total even number then do addition total even number with the min number from the array