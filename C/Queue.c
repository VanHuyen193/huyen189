#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Queue{
    int data;
    struct Queue *next;
};

typedef struct Queue *node;

node head = NULL;

node Create(int data){
    node temp;
    temp = (node)malloc(sizeof(struct Queue));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void enQueue(int data){
    node p;
    node temp;
    temp = Create(data);
    if(head == NULL){
        head = temp;
    }
    else{
        p = head;
        while(p->next!=NULL){
            p = p->next;
        }
        p->next = temp;
    }
}

void deQueue(){
    if(head != NULL){
        head = head->next;
    }
}

bool IsEmpty(){
    if (head == NULL){
        return true;
    }
    else{
        return false;
    }
}

void Output(){
    for(node p=head; p!=NULL; p = p->next){
        printf("%d ", p->data);
    }
    printf("\n");
}

void choice(){
    int c;
    printf("Lua chon: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Nhap gia tri: ");
        int a;
        scanf("%d", &a);
        enQueue(a);
        break;
    case 2:
        deQueue();
        break;
    case 3:
        if(IsEmpty()){
            printf("Queue rong!\n");
        }
        else{
            printf("Queue hien tai la: ");
            Output();
        }
        break;
    case 4:
        Output();
        break;
    default:
        break;
    }
    choice();
}

int main(){
    printf("1. Enqueue\n2. Dequeue\n3. Is empty\n4. Output\n");
    choice();
    return 0;
}

