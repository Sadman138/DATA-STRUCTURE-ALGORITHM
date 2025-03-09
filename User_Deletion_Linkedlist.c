#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

struct Node* deleteNode(struct Node* head, int position) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp == NULL)
        return head;

    if (position == 1) {
        head = temp->next;
        free(temp);
        return head;
    }

    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }

    return head;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int node_num, data, position;

    printf("Enter the number of nodes: ");
    scanf("%d", &node_num);

    for (int i = 0; i < node_num; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        struct Node* new_node = newNode(data);
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

    printf("Enter the position to delete (1-based index): ");
    scanf("%d", &position);

    head = deleteNode(head, position);

    printf("List after deletion: ");
    printList(head);

    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
