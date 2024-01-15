#include "Register.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void registerUser(struct User* user) {
    printf("Enter a username : ", MAX_USERNAME_LEN - 1);
    scanf("%s", user->username);

    printf("Enter a password : ", MAX_PASSWORD_LEN - 1);
    scanf("%s", user->password);

    printf("Enter an email : ", MAX_EMAIL_LEN - 1);
    scanf("%s", user->email);

    if (strstr(user->email, "manager") != NULL) {
        user->userType = MANAGER;
    }
    else if (strstr(user->email, "sales") != NULL) {
        user->userType = SALESPERSON;
    }
    // else {
    //     printf("Invalid email.\n");
    // }
}