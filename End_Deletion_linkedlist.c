#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

struct node* deleteEnd(struct node* head) {
    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    struct node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    return head;
}

void printList(struct node* curr) {
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

int main() {
    struct node* head = NULL;
    int node_num, data;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &node_num);

    for (int i = 0; i < node_num; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        struct node* new_node = createNode(data);
        if (head == NULL) {
            head = new_node;
        } else {
            struct node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    head = deleteEnd(head);
    printList(head);

    return 0;
}
