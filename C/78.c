#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Node {
    int data;
    struct Node *next;
};

struct Node *table[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = NULL;

    if (table[index] == NULL) {
        table[index] = newNode;
    } else {
        struct Node *temp = table[index];
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}   
    
void display() {  
    for (int i = 0; i < SIZE; i++) {  
        printf("Bucket %d: ", i); 
        struct Node *temp = table[i]; 
        while (temp != NULL) {
            printf("%d -> ", temp->data); 
            temp = temp->next;
        } 
        printf("NULL\n"); 
    } 
}   
    
int main() {
    for (int i = 0; i < SIZE; i++) {
        table[i] = NULL;
    }

    insert(10);
    insert(15);
    insert(20);
    insert(25);
    insert(30);
    insert(35);
    insert(40);
    insert(45);
    insert(50);
    insert(55);
    insert(60);

    display();

    return 0;
}
