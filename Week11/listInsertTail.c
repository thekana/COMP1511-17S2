#include "list.h"
#include <stdio.h>
#include <stdlib.h>

Node newNode(int a){
    Node new = calloc(1,sizeof(node));
    if (new==NULL) {
        fprintf(stderr,"Couldnt allocate memory\n");
        exit(EXIT_FAILURE);
    }
    new->value = a;
    new->next =NULL;
    return new;
}

void listInsertTail (List l, int val) {
    Node new = newNode(val);
    Node curr = l->head;
    if(curr == NULL) {
        l->head = new;
        new->next = NULL;
    } else {
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = new;
    }
}
