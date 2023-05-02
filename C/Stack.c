#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Stack{
    int data;
    struct Stack *next;
};

typedef struct Stack *Node;

Node head = NULL;

Node createnode (char value){
    Node temp;
    temp = (Node)malloc(sizeof(struct Stack));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void push(char value){
    Node p;
    Node temp = createnode(value);
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

void isValidBracket()

void pop(){
    Node p;
    p = head;
    if(head == NULL){
        printf("Stack rỗng!\n");
    }  
    else if(head->next == NULL){
        head = NULL;
        free(p);
    }
    else{
        while(p->next->next != NULL){
            p = p->next;
        }
        free(p->next);
        p->next = NULL;
    }
}

bool empty(){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}

void top(){
    if(empty()==true){
        printf("Stack rong!\n");
    }
    else{
        printf("%d\n", head->data);
    }
}

void Output(){
    for(Node p=head; p!=NULL; p = p->next){
        printf("%d=>", p->data);
    }
    printf("NULL\n");
}

void choice(){
    int ch;
    printf("Lua chon: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Nhap gia tri: ");
        int a;
        scanf("%d", &a);
        push(a);
        break;
    case 2:
        pop();
        break;
    case 3:
        top();
        break;
    case 4:
        Output();
        break;
    default:
        break;
    }
    printf("Nhap tiep: y\n");
    char c;
    fflush(stdin);
    scanf("%c",&c);
    if (c == 'y')
        choice();
}

int main(){
    printf("1: Push\n2: Pop\n3: Top\n4: Output\n");
    choice();
    return 0;
}