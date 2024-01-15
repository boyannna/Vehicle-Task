#pragma once
#include <stdbool.h>


enum { MAX_USERNAME_LEN = 32, MAX_PASSWORD_LEN = 32, MAX_EMAIL_LEN = 64 };

struct User {
    char username[MAX_USERNAME_LEN];
    char password[MAX_PASSWORD_LEN];
    char email[MAX_EMAIL_LEN];
    UserType userType;
};

//Enum for the different types of users
typedef enum {
    MANAGER,
    SALESPERSON
} UserType;

//bool registerUser(struct User* user);
void registerUser(struct User* user);
