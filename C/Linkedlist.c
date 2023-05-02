#include<stdio.h>
#include<stdlib.h>

struct LinkedList{
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList *node;

node head=NULL;

node CreateNode(int value){
    node temp;
    temp = (node)malloc(sizeof(struct LinkedList));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void AddHead(int value){
    node temp = CreateNode(value);
    if (head == NULL){
        head = temp; 
    }else{
        temp->next = head;
        head = temp;
    }
}
void AddTail(int value){
    node temp,p;
    temp = CreateNode(value);
    if (head == NULL){
        head = temp;     
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
}
void AddAt(int locate, int value){
    
    if (locate == 1){
        AddHead(value); 
    }
    else{ 
        node temp,p = head;
        temp = CreateNode(value);
        for (int i=1;i<=locate-2;i++){
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

void DeleteHead(){
    if (head != NULL){
        head= head->next;
    }
}

void DeleteTail(){
    node temp=head;
    if (head != NULL){
        while (temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
}

void Traverser(){
    for(node p = head; p != NULL; p = p->next){
        printf("%d ", p->data);
    }
}

void nhapxuat(){
    int x,y,d; 
    
    printf("Chon cau lenh: ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Nhap gia tri: ");
        scanf("%d",&y);
        AddHead(y);
        break;
    case 2:
        printf("Nhap gia tri: ");
        scanf("%d",&y);
        AddTail(y);
        break;
    case 3:
        printf("Nhap vi tri: ");
        scanf("%d",&d);
        printf("Nhap gia tri: ");
        scanf("%d",&y);
        AddAt(d,y);
        break;
    case 4:
        DeleteHead();
        break;
    case 5:
        DeleteTail();
        break;
    }
    printf ("Ban co muon tiep tuc? (y/n): ");
    char c;
    fflush(stdin);
    scanf("%c",&c);
    if (c == 'y')
        nhapxuat();
}

int main(){
    printf("AddHead = 1; AddTail = 2; AddAt = 3; DeleteHead = 4; DeleteTail = 5\n");
    nhapxuat();
    printf("Danh sach da tao ra la: \n");
    Traverser();
    return 0;
}