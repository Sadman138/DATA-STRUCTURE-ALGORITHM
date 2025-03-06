#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* create_node(int item, Node* next) {
    Node* new_node = (Node*)malloc(sizeof(Node));

    if (new_node == NULL) {
        printf("Error! Could Not Create A New Node\n");
        exit(1);
    }

    new_node->data = item;
    new_node->next = next;

    return new_node;
}

int main() {
    int value,value1;
    printf("Enter data for the new node : ");
    scanf("%d %d", &value,&value1);

    Node* n;
    n = create_node(value, NULL); 

    printf("Node created with data = %d\n", n->data);
    Node* n1;
    n1= create_node(value1, NULL); 

    printf("Node created with data = %d\n", n1->data);
    
    return 0;
}