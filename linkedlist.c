#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    double data;
    struct Node* next;
} Node;

void insert(Node** head, double value){
    Node* newNode = malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

void delete(Node** head, double value){
    Node* temp = *head;
    Node* prev = NULL;

    while(temp != NULL && temp->data != value){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        return; // item not found
    }

    if(prev == NULL){
        *head = temp->next;
    }
    else{
        prev->next = temp->next;
    }

    free(temp);
}

Node* find(Node* head, double value){
    while(head != NULL){
        if(head->data == value){
            return head;
        }    
        head = head->next;
    }
    return NULL;
}

void reverse(Node** head){
    Node* cur = head;
    Node* prev = NULL;

    while(cur){
        Node* temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }

    *head = prev;
}

void printList(Node* head){
    while(head != NULL){
        printf("%lf -> ", head->data);
        head = head->next;
    }

    printf("NULL\n");
}

int main(){
    Node* head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    printList(head);  // 10 -> 20 -> 30 -> NULL

    delete(&head, 20);
    printList(head);  // 10 -> 30 -> NULL

    Node* found = find(head, 30);
    if (found)
        printf("Found: %d\n", found->data);

    reverse(&head);
    printList(head);  // 30 -> 10 -> NULL

    return 0;
}