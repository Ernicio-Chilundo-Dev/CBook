// contacts.h
#ifndef CONTACTS_H
#define CONTACTS_H

#include <stdbool.h>

#define MAX_NAME 50
#define MAX_PHONE 20
#define MAX_EMAIL 50

typedef struct
{
    char name[MAX_NAME];
    char phone[MAX_PHONE];
    char email[MAX_EMAIL];
} Contact;

void add_contact(Contact **contacts, int *count);
void list_contacts(Contact *contacts, int count);
void search_contact(Contact *contacts, int count);
void remove_contact(Contact **contacts, int *count);

#endif