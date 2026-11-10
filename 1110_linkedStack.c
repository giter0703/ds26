//연결리스트로 구현한 스택

#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

typedef int element;
typedef struct StackNode{
    element data;
    struct StackNode *link;
} StackNode;

typedef struct{
    StackNode *top;

}LinkedStackType;

void init(LinkedStackType *s){
    s->top = NULL;
}

int is_empty(LinkedStackType *s){
    return (s->top == NULL);
}

int is_full(LinkedStackType *s){
    return 0;
}

void push(LinkedStackType *s, element item){
    StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
    temp->data = item;
    temp->link = s->top;
    s->top = temp;
}

element pop(LinkedStackType *s){
    if(is_empty(s)){
        fprintf(stderr, "스택이 비었음n");
        exit(1);
    }
    else{
        StackNode *temp = s->top;
        int data = temp->data;
        s->top = s->top->link;
        free(temp);
        return data;
    }
}

element peek(LinkedStackType *s){
    if(is_empty(s)){
        fprintf(stderr, "스택이 비었음n");
        exit(1);
    }
    else{
        return s->top->data;
    }
}

void print_stack(LinkedStackType *s){
    StackNode *p;
    for(p = s->top; p != NULL; p = p->link){
        printf("%d->", p->data);
    }
    printf("NULL\n");
}

int main(void){
    LinkedStackType s;
    init(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    print_stack(&s);
    pop(&s);    print_stack(&s);
    pop(&s);    print_stack(&s);
    pop(&s);    print_stack(&s);
    return 0;
}
