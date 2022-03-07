#include <stdio.h>
int main() {
    int amm[] = {7, 5, 4, 2, 9};
    int i, min, max, minIndx, maxIndx;
    min=amm[0];
    max=amm[0];
    for(i=0; i<=4; i++){
        if(amm[i] < min){
            min = amm[i];
            minIndx = i;
        }
        printf("Index[%d]=%d\n", i, amm[i]);
        if(amm[i] > max){
            max = amm[i];
            maxIndx = i;
        }
    } 

    printf("Minimum number is: %d and the index number is %d\n", min, minIndx);
    printf("Maximum number is: %d and the index of max num:%d\n", max, maxIndx);


    return 0;
}