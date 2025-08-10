// main.c
#include <stdio.h>
#include <stdlib.h>
#include "contacts.h"

int main(void)
{
    Contact *contacts = NULL;
    int count  = 0;
    int choice;

    do
    {
        printf("\n====================== Contacts manager ======================\n");
        printf("1. Add contact\n");
        printf("2. List contacts\n");
        printf("3. Search contact\n");
        printf("4. Remove contact\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        getchar();

    } while (choice != 5);
}