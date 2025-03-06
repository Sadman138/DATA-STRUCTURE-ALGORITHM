#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* create_node(int value) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

struct Node* insert_at_end(struct Node* head, int value) {
    struct Node* new_node = create_node(value);
    
    if (head == NULL) {
        return new_node;
    }
    
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}

struct Node* insert_at_position(struct Node* head, int value, int position) {
    if (position == 0) {
        struct Node* new_node = create_node(value);
        new_node->next = head;
        return new_node;
    }

    struct Node* temp = head;
    for (int i = 0; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
       
        return head;
    }

    struct Node* new_node = create_node(value);
    new_node->next = temp->next;
    temp->next = new_node;
    
    return head;
}

void print_list(struct Node* head) {
    struct Node* temp = head;
        printf("Linked List: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    
}

int main() {
    struct Node* head = NULL;
    int num_nodes, value, position;

    printf("Enter the number of nodes to create: ");
    scanf("%d", &num_nodes);

    for (int i = 0; i < num_nodes; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);
        head = insert_at_end(head, value);
    }

    printf("Enter the position to insert a new node: ");
    scanf("%d", &position);
    printf("Enter the data for the new node: ");
    scanf("%d", &value);

    head = insert_at_position(head, value, position);

    print_list(head);
    return 0;
}
