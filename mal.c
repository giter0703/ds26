#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//구조체 생성
typedef struct Student{
    char name[10];
    int age;
    float gpa;
}std;
int main(){

    //구조체 변수 및 동적 할당
    std *s;
    //동적 할당
    s = (std*)malloc(sizeof(std));

    if(s == NULL){
        fprintf("stderr", "메모리가 부족해서 할당 안됨");
        exit(1);
    }
    //데이터 삽입
    strcpy(s->name, "Park");
    s->age = 22;
    s->gpa = 4.3;
    // 동적 해제
    free(s);
    return 0;
}