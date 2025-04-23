#include "linkedList.h"

void printNode(NODE n1){
    printf("[%d] ", n1->ele);
}

void printList(LIST l1){
    if(!l1){
        printf("No list created.\n");
        return;
    }
    
    printf("[HEAD] -> ");
    for(NODE temp = l1->head; temp != NULL; temp = temp->next){
        printNode(temp);
        printf("-> ");
    }
    printf("[NULL]\n");
}

LIST createNewList(){
	LIST ll = (LIST)calloc(1, sizeof(struct linked_list));
    ll->count = 0;
    ll->head = NULL;
    return ll;
}

NODE createNewNode(int value){
	NODE n = (NODE)calloc(1, sizeof(struct node));
    n->ele = value;
    n->next = NULL;
    return n;
}


void insertNodeIntoList(NODE n1, LIST l1){
	if(!l1){
        printf("No list created.\n");
        return;
    }

    n1->next = l1->head;
    l1->head = n1;
    l1->count++;
    return;
}

void insertNodeAtEnd(NODE n1, LIST l1){
    if(!l1){
        printf("No list created.\n");
        return;
    }

    NODE temp = l1->head;
    while(temp && temp->next)
        temp = temp->next;
    temp->next = n1;
    n1->next = NULL;
    l1->count++;
    return;
}


NODE search(LIST l1, int value){
    if(!l1){
        printf("No list created.\n");
        return NULL;
    }

    for(NODE temp = l1->head; temp != NULL; temp = temp->next)
        if(temp->ele == value)
            return temp;

    return NULL;
}

void insertAfter(int searchEle, NODE n1, LIST l1){
    NODE n = search(l1, searchEle);
    if(!n){
        printf("No element with value %d found.\n", searchEle);
        return;
    }

    NODE temp = n->next;
    n->next = n1;
    n1->next = temp;
    l1->count++;
    return;
}

void removeFirstNode(LIST l1){
    if(!l1){
        printf("No list created.\n");
        return;
    }
    if(!l1->head){
        printf("Empty list.\n");
        return;
    }

    NODE temp = l1->head;
    l1->head = temp->next;
    free(temp);
    l1->count--;
    return;    
}

void removeLastNode(LIST l1){
    if(!l1){
        printf("No list created.\n");
        return;
    }

    NODE prev = NULL;
    NODE temp = l1->head;
    while(temp && temp->next){
        prev = temp;
        temp = temp->next;
    }

    if(prev == NULL)
        removeFirstNode(l1);
    else{
        prev->next = temp->next;
        free(temp);
        l1->count--;
    }
}

void removeElem(int value, LIST l1) {
    if (!l1) {
        printf("No list created.\n");
        return;
    }

    NODE prev = NULL;
    for (NODE temp = l1->head; temp != NULL; temp = temp->next) {
        if (temp->ele == value) {
            if (prev == NULL)
                removeFirstNode(l1);
            else {
                prev->next = temp->next;
                free(temp);
                l1->count--;
            }
            return;
        }
        prev = temp;
    }

    printf("No element with value %d found.\n", value);
    return;
}
