#include <stdio.h>
#include <stdlib.h>

int main(){
    int *a;
    a = (int*)malloc(sizeof(int));
    if(a == NULL){
        fprintf(stderr, "메모리 부족");
        exit(1);
    }
    for(int i = 0; i < 10; i++){
        a[i] = i;
    }
    for(int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
