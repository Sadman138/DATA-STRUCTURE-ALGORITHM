#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* create_node(int item, struct Node* next) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

struct Node* insert_at_beginning(struct Node* head, int value) {
    return create_node(value, head);
}

void print_list(struct Node* head) {
    struct Node* temp = head;
    if (head == NULL) {
        printf("Linked List is empty.\n");
    } else {
        printf("Linked List: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct Node* head = NULL;
    int num_nodes, value;
    printf("Enter the number of nodes to create: ");
    scanf("%d", &num_nodes);

    for (int i = 0; i < num_nodes; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        head = insert_at_beginning(head, value);
    }

    print_list(head);
    return 0;
}