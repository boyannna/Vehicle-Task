#pragma once
#include <stdbool.h>

enum { MAX_USERNAME_LEN = 32, MAX_PASSWORD_LEN = 32 };

struct User {

    char username[MAX_USERNAME_LEN];
    char password[MAX_PASSWORD_LEN];
};

//bool loginUser(struct User* user);
void loginUser(struct User* user);