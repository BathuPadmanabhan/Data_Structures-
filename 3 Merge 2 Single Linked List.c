#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*n;

void ins_end(struct Node** head, int data) {
    n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->next = NULL;

    if (*head == NULL) {
        *head = n;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
    struct Node* mergedList = NULL;
    struct Node* tail = NULL;

    while (list1 != NULL && list2 != NULL) {
        if (list1->data < list2->data) {
            if (mergedList == NULL) {
                mergedList = tail = list1;
            } else {
                tail->next = list1;
                tail = list1;
            }
            list1 = list1->next;
        } else {
            if (mergedList == NULL) {
                mergedList = tail = list2;
            } else {
                tail->next = list2;
                tail = list2;
            }
            list2 = list2->next;
        }
    }

    if (list1 != NULL) {
        if (mergedList == NULL) {
            mergedList = list1;
        } else {
            tail->next = list1;
        }
    } else if (list2 != NULL) {
        if (mergedList == NULL) {
            mergedList = list2;
        } else {
            tail->next = list2;
        }
    }

    return mergedList;
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    ins_end(&list1, 1);
    ins_end(&list1, 3);
    ins_end(&list1, 5);

    ins_end(&list2, 2);
    ins_end(&list2, 4);
    ins_end(&list2, 6);

    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    struct Node* mergedList = mergeSortedLists(list1, list2);

    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
