#include "linkedList.h"

int main()
{
    LIST newList = createNewList();
    NODE n1 = createNewNode(10);
    NODE n2 = createNewNode(20);
    NODE n3 = createNewNode(30);
    NODE retNode = search(newList,10);
    if (retNode != NULL){
        printNode(retNode);
        printf("\n");
    }

    printList(newList);
    insertNodeIntoList(n1,newList);
    printList(newList);
    insertNodeIntoList(n2,newList);
    printList(newList);
    insertNodeAtEnd(n3,newList);
    printList(newList);

    retNode = search(newList,10);
    if (retNode != NULL){
        printNode(retNode);
        printf("\n");
    }

    retNode = search(newList,50);
    if (retNode != NULL){
        printNode(retNode);
        printf("\n");
    }

    NODE n4 = createNewNode(40);
    insertAfter(10,n4,newList);
    printList(newList);

    removeElem(40,newList);
    printList(newList);
    removeElem(20,newList);
    printList(newList);
    removeElem(10,newList);
    printList(newList);
    removeElem(30,newList);
    printList(newList);
    removeElem(30,newList);
    printList(newList);

    if(newList){
        NODE ptr = newList->head;

        while(ptr){
            NODE temp = ptr->next;
            free(ptr);
            ptr = temp;
        }

        free(newList);
    }

    return 0;
}