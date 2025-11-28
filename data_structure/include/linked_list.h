
#include <stddef.h>

typedef struct Node {
    void* pval;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
    size_t size;   
} List;

List list_new(); 

Node* create_node(void* pval); 

void  list_push_front(List* list, void* pval); 