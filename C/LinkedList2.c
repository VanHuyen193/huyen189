#include<stdio.h>
#include<stdlib.h>
struct LinkedList2{
    int data;
    struct LinkedList2 *next;
    struct LinkedList2 *back;
};

typedef struct LinkedList2 *node;

node head = NULL;
node tail = NULL;

node Create(int value){
    node temp;
    temp = (node)malloc(3*sizeof(node));
    temp->next = NULL;
    temp->back = NULL;
    temp->data = value;
    return temp;
}

void addHead(int data){
    node temp;
    temp = Create(data);
    if(head==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->next = head;
        head->back = temp;
        head = temp;
    }
}

void addTail(int data){
    node temp;
    temp = Create(data);
    if(tail==NULL){
        head = temp;
        tail = temp;
    }
    else{
        temp->back = tail;
        tail->next = temp;
        tail = temp; 
    }
}

void addAt(int data, int index){
    node temp, p;
    p = head;
    temp = Create(data);
    if(index == 1){
        addHead(data);
    }
    else{
        for(int i=1; i<=index-2; i++){
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
        temp->back = p;
        temp->next->back=temp;
    }

}

void delHead(){
    head = head->next;
    head->back = NULL;
}

void delTail(){
    tail = tail->back;
    tail->next = NULL;
}

void delAT(int index){
    node p = head;
    if(index==1){
        delHead();
    }
    else{
    for(int i=1; i<index; i++){
        p = p->next;
    }
    (p->back)->next = p->next;
    }
}

void output(){
    if(head==NULL){
        printf("List trong!");
    }
    else{
        for(node p = head; p!=NULL; p=p->next){
            printf("%d=>", p->data);
        }
        printf("NULL\n");
    }
}

void nhap() {
    int x, y, z, d;
    printf("Chon cau lenh: ");
    scanf("%d", &x);
    while (x >= 1 && x <= 7) {
        switch (x) {
            case 1:
                printf("Nhap gia tri: ");
                scanf("%d", &y);
                addHead(y);
                break;
            case 2:
                printf("Nhap gia tri: ");
                scanf("%d", &z);
                addTail(z);
                break;
            case 3:
                printf("Nhap gia tri: ");
                scanf("%d", &y);
                printf("Nhap vi tri: ");
                scanf("%d", &d);
                addAt(y, d);
                break;
            case 4:
                delHead();
                break;
            case 5:
                delTail();
                break;
            case 6:
                printf("Nhap vi tri: ");
                int index;
                scanf("%d", &index);
                delAT(index);
                break;
            case 7:
                output();
                break;
            default:
                printf("Cau lenh khong hop le!\n");
                break;
        }
        printf("Chon cau lenh: ");
        scanf("%d", &x);
    }
}


int main(){
    printf("1.Add head\n2.Add tail\n3.Add at\n4.Delete head\n5.Delete tail\n6.Detale at\n7.Output\n");
    nhap();
    return 0;
}
