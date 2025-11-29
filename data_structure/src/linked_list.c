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

void list_print(const List* list, print_func pfunc) {
    Node* cur = list->head;
    printf("[");

    while (cur) {
        pfunc(cur->pval);  
        if (cur->next) printf(" -> ");
        cur = cur->next;
    }

    printf("]  (size = %zu)\n", list->size);
}

void list_push_front(List* list, void* pval) {
    Node* node = create_node(pval);
    node->next = list->head;
    list->head = node;
    list->size++;
}

void list_push_back(List* list, void* pval) {
    Node* node = create_node(pval);
    if (!node) return;

    if (!list->head) {
        list->head = node;
    } else {
        Node* cur = list->head;
        while (cur->next)
            cur = cur->next;
        cur->next = node;
    }
    list->size++;
}

void* list_pop_front(List* list) {
    if (!list->head) return NULL;

    Node* old = list->head;
    void* pval = old->pval;

    list->head = old->next;
    free(old);
    list->size--;

    return pval;
}




