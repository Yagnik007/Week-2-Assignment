#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *insertEnd(struct Node *last, int data)
{
    if (last == NULL)
    {

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = newNode;
        return newNode;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    return newNode;
}

struct Node *deleteNode(struct Node *last, int key)
{
    if (last == NULL)
    {
        printf("List is empty.\n");
        return NULL;
    }

    struct Node *current, *prev;

    if (last->next == last && last->data == key)
    {
        free(last);
        return NULL;
    }

    if (last->next->data == key)
    {
        current = last->next;
        last->next = current->next;
        free(current);
        return last;
    }

    prev = last->next;
    current = prev->next;

    while (current != last->next && current->data != key)
    {
        prev = current;
        current = current->next;
    }

    if (current == last->next)
    {
        printf("Node with value %d not found.\n", key);
        return last;
    }

    prev->next = current->next;
    free(current);
    return last;
}

struct Node *searchNode(struct Node *last, int key)
{
    if (last == NULL)
    {
        printf("List is empty.\n");
        return NULL;
    }

    struct Node *current = last->next;

    do
    {
        if (current->data == key)
        {
            printf("Node with value %d found.\n", key);
            return current;
        }
        current = current->next;
    } while (current != last->next);

    printf("Node with value %d not found.\n", key);
    return NULL;
}

void displayList(struct Node *last)
{
    if (last == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = last->next;

    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);
    printf("(head)\n");
}

int main()
{
    struct Node *last = NULL;

    last = insertEnd(last, 1);
    last = insertEnd(last, 2);
    last = insertEnd(last, 3);
    last = insertEnd(last, 4);

    printf("Original Circular Linked List:\n");
    displayList(last);

    last = deleteNode(last, 2);
    printf("\nCircular Linked List after deleting node with value 2:\n");
    displayList(last);

    struct Node *foundNode = searchNode(last, 3);

    last = insertEnd(last, 5);
    last = insertEnd(last, 6);
    printf("\nCircular Linked List after inserting more nodes:\n");
    displayList(last);

    struct Node *current = last->next;
    while (current != last)
    {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
    free(last);

    return 0;
}
