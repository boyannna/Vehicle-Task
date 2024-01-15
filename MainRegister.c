#include <stdio.h>
#include <string.h>
#include "LogIn.h"
#include "Register.h"


int main(void) {
    struct User user;

    // Register a new user
    registerUser(&user);

    // Print the user's information
    printf("Username: %s\n", user.username);
    printf("Password: %s\n", user.password);
    printf("Email: %s\n", user.email);
    if (user.userType == MANAGER) {
        printf("User is a manager.\n");
    }
    else if (user.userType == SALESPERSON) {
        printf("User is a salesperson.\n");
    }

    return 0;
}