#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode* link;
}ListNode;

ListNode* insert_first(ListNode *head, element data) {
    ListNode *p = (ListNode*)malloc(sizeof(ListNode));
    p->data = data;
    p->link = head;
    head = p;
    return p;
}

ListNode* insert(ListNode *head, ListNode * prev,element data) {
    ListNode *p = (ListNode*)malloc(sizeof(ListNode));
    p->data = data;
    p->link = NULL;

    if(prev == NULL){
        p->link = head;
        head = p;
    }else{
        p->link = prev->link;
        prev->link = p;
    }
    return p;
}


int main(){
    ListNode *head = NULL;

    head = insert_first(head, 10);
    insert(head, head, 15);


    for( ListNode *p=head; p!=NULL; p=p->link){
        printf("%d->", p->data);
    }
    free(head);
}
