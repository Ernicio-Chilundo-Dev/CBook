// contacts.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <contacts.h>

void add_contact(Contact **contacts, int *count)
{
    *contacts = realloc(*contacts, (*count + 1) * sizeof(Contact));
    if (*contacts == NULL)
    {
        printf("Memory error!\n");
        exit(1);
    }

    printf("Name: ");
    fgets((*contacts)[*count].name, MAX_NAME, stdin);
    (*contacts)[*count].name[strcspn((*contacts)[*count].name, "\n")] = '\0';

    printf("Phone: ");
    fgets((*contacts)[*count].phone, MAX_PHONE, stdin);
    (*contacts)[*count].phone[strcspn((*contacts)[*count].phone, "\n")] = '\0';

    printf("Email: ");
    fgets((*contacts)[*count].email, MAX_EMAIL, stdin);
    (*contacts)[*count].email[strcspn((*contacts)[*count].email, "\n")] = '\0';

    (*count)++;
    printf("Contact added sucessfull!\n");
}