#include "linked_list.h"
#include <stddef.h>
#include <stdio.h>

#include <stdio.h>

int main() {
    //Créer une nouvelle liste
    List mylist = list_new();

    int a = 10, b = 20, c = 30;

    //Ajouter des éléments en tête
    list_push_front(&mylist, &a);
    list_push_front(&mylist, &b);
    list_push_front(&mylist, &c);

    //Parcourir la liste et afficher les valeurs
    printf("Contenu de la liste :\n");
    Node* cur = mylist.head;
    while(cur) {
        printf("%d->", *(int*)cur->pval); 
        cur = cur->next;
    }
    printf("NULL\n");
    printf("Taille de la liste : %zu\n", mylist.size);

    return 0;
}
