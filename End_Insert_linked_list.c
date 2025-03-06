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

struct Node* insert_at_end(struct Node* head, int value) {
    struct Node* new_node = create_node(value, NULL);
    
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
        head = insert_at_end(head, value);
    }

    print_list(head);
    return 0;
}
