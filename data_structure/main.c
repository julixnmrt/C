#include "linked_list.h"
#include <stddef.h>
#include <stdio.h>

#include <stdio.h>

void print_int(void* p) {
    printf("%d", *(int*)p);
}

void print_float(void* p) {
    printf("%f", *(float*)p);
}

int main() {
    //Créer une nouvelle liste
    List mylist = list_new();

    float a = 10.11, b = 20.3, c = 30.1, d=50;

    //Ajouter des éléments en tête
    list_push_front(&mylist, &a);
    list_push_front(&mylist, &b);
    list_push_front(&mylist, &c);
    list_push_back(&mylist, &d);
    //Parcourir la liste et afficher les valeurs
    list_print(&mylist,print_float);


    list_pop_front(&mylist);
    list_print(&mylist,print_float);
    return 0;
}
