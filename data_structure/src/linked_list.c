#include "linked_list.h"
#include <stddef.h>
#include <stdio.h>   
#include <stdlib.h>  

List list_new() {
    List list;
    list.head = NULL;
    list.size = 0;
    return list;
}

Node* create_node(void* pval) {
    Node* node = malloc(sizeof(Node));
    if (!node) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
    node->pval = pval;
    node->next = NULL;
    return node;
}

void list_push_front(List* list, void* pval) {
    Node* node = create_node(pval);
    node->next = list->head;
    list->head = node;
    list->size++;
}


