
#include <stddef.h>

typedef void (*print_func)(void*);

typedef struct Node {
    void* pval;
    struct Node* next;
} Node;

typedef struct List {
    Node* head;
    size_t size;   
} List;

/**
 * @brief Initialise une nouvelle liste chaînée vide.
 *
 * @return Une structure List avec head = NULL et size = 0.
 */
List list_new(); 

/**
 * @brief Alloue et initialise un nouveau nœud.
 *
 * @param pval Pointeur vers la valeur stockée dans le nœud.
 * @return Un pointeur vers le nouveau nœud, ou NULL en cas d'échec malloc.
 */
Node* create_node(void* pval); 

void list_print(const List* list, print_func pfunc);

void  list_push_front(List* list, void* pval); 

void  list_push_back(List* list, void* pval); 

void* list_pop_front(List* list);

