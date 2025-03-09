#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteHead(struct Node* head) {
    if (head == NULL)
        return NULL;
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

void printList(struct Node* curr) {
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

struct Node *createNode(int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

int main() {
    struct Node* head = NULL;
    int node_num, data;
    
    printf("Enter the number of nodes: ");
    scanf("%d", &node_num);

    for (int i = 0; i < node_num; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        struct Node* new_node = createNode(data);
        if (head == NULL) {
            head = new_node;
        } else {
            struct Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    head = deleteHead(head);
    printList(head);

    return 0;
}
