# Contact Manager

A simple command-line Contact Manager written in C.  
It allows you to add, list, search, and remove contacts, storing them in memory during the program's execution.

## Features

- **Add Contact** – Store a new contact with name, phone, and email.
- **List Contacts** – Display all saved contacts.
- **Search Contact** – Find a contact by name.
- **Remove Contact** – Delete a contact from the list.
- **Exit** – Close the program safely and free allocated memory.

## Project Structure

├── main.c # Program entry point and main menu loop
├── contacts.c # Implementation of contact functions
├── contacts.h # Function prototypes and data structure definitions
└── Makefile # Build instructions (if available)


## How It Works

1. The program starts and shows a menu of options.
2. You choose an action by typing the corresponding number.
3. Actions are handled via a `switch` statement inside a loop.
4. Memory is dynamically allocated for contacts and freed before exiting.

## Requirements

- **Compiler:** GCC or any C99-compatible compiler.
- **OS:** Linux, macOS, or Windows with a C compiler installed.

## Compilation

```bash
gcc main.c contacts.c -o contact_manager
