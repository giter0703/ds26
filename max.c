#include <stdio.h>
#define size 6
int max(int * list){
    int largest = list[0];
    for(int i = 1; i < size; i++){
        if(list[i] > largest)   largest = list[i];
    }
    return largest;
}


int main(){
    int arr[] = {10, 23, 42, 22, 11, 16};
    printf("max : %d", max(arr));

    return 0;
}