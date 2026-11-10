#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct StudentTag{
    char name[10];
    int age;
    double gpa;
}std;

int main(){
    std *s;
    
    s = (std*)malloc(sizeof(std));

    //메모리 부족

    //실행
    strcpy(s->name, "Park");
    s->age = 20;
    s->gpa = 4.2;

    free(s);

    return 0;
}