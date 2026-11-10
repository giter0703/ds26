#include <stdio.h>
#include <stdlib.h>
#define size 4

int top = -1;
int stack[size];


int isfull(){
    return (top == size -1);
}

int isempty(){
    return (top == -1);
}

void push(int item){
    if(isfull()){
        //fprintf(stderr, "꽉참");
        return;
    }
    else{
        stack[++top] = item; 
    }
}

int pop(){
    if(isempty()){
        //fprintf(stderr, "비었음");
        //exit(1);
        return 0;
    }
    else{
        return stack[top--];
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    printf("%d ", pop());
    return 0;
}