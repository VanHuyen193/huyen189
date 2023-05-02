#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node *NodePtr;

NodePtr head = NULL;

NodePtr createNode(int data) {
    NodePtr temp = (NodePtr)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void addNode(int data) {
    NodePtr temp, p;
    temp = createNode(data);
    if (head == NULL) {
        head = temp;
        head->next = head;
    }
    else {
        p = head;
        while (p->next != head) {
            p = p->next;
        }
        p->next = temp;
        temp->next = head;
    }
}

void printList() {
    NodePtr p = head;
    if (p == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("%d", p->data);
    p = p->next;
    while (p != head) {
        printf(" %d", p->data);
        p = p->next;
    }
    printf("\n");
}

NodePtr deleteNode(int k) {
    if (head == NULL) {
        printf("List is empty.\n");
        return NULL;
    }
    NodePtr p = head;
    NodePtr prev = NULL;
    while (p->next != p) {
        for (int i = 1; i < k; i++) {
            prev = p;
            p = p->next;
        }
        if (prev == NULL) {
            prev = head;
            while (prev->next != head) {
                prev = prev->next;
            }
        }
        prev->next = p->next;
        NodePtr temp = p;
        p = p->next;
        free(temp);
    }
    head = p;
    return head;
}

int main() {
    int n, k;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter K: ");
    scanf("%d", &k);
    for (int i = 1; i <= n; i++) {
        addNode(i);
    }
    printf("Initial list: ");
    printList();
    head = deleteNode(k);
    printf("Final list: ");
    printList();
    printf("The last remaining node has value: %d\n", head->data);
    return 0;
}
