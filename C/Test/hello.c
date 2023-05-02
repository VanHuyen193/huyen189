#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node *node;

node head = NULL;

node createNode(int data) {
    node temp = (node)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void addNode(int data) {
    node temp = createNode(data);
    if (head == NULL) {
        head = temp;
        head->next = head;
    }
    else {
        node p = head;
        while (p->next != head) {
            p = p->next;
        }
        p->next = temp;
        temp->next = head;
    }
}

void printList() {
    if (head == NULL) {
        printf("Danh sach lien ket vong rong.");
        return;
    }
    node p = head;
    do {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
    printf("\n");
}

node deleteNode(int k) {
    if (head == NULL) {
        printf("Danh sach lien ket vong rong.");
        return NULL;
    }

    node p = head, prev = NULL;
    while (p->next != head) {
        prev = p;
        p = p->next;
    }

    for (int i = 1; i < k; i++) {
        prev = p;
        p = p->next;
    }

    if (prev == NULL) {
        head = p->next;
        prev = head;
        while (prev->next != p) {
            prev = prev->next;
        }
    }
    prev->next = p->next;
    free(p);

    return head;
}

int main() {
    int N, K;
    printf("Nhap N: ");
    scanf("%d", &N);

    printf("Nhap K: ");
    scanf("%d", &K);

    for (int i = 1; i <= N; i++) {
        addNode(i);
    }

    printf("Danh sach ban dau: ");
    printList();

    head = deleteNode(K);

    printf("Danh sach sau khi xoa phan tu thu %d: ", K);
    printList();

    printf("Phan tu con lai la: %d", head->data);

    return 0;
}
