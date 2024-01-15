#include "LogIn.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void loginUser(struct User* user) {

    printf("Enter a username : ", MAX_USERNAME_LEN - 1);
    scanf_s("%s", user->username);

    printf("Enter a password : ", MAX_PASSWORD_LEN - 1);
    scanf_s("%s", user->password);
}