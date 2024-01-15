#ifndef APPCONFIGURATION_H
#define APPCONFIGURATION_H
// !APPCONFIGURATION_H

#define CLIENT_BUILD 0
#define SALES_BUILD 1
#define MANAGER_BUILD 2

#define ROLE_CUSTOMER 0
#define ROLE_SALES 1 
#define ROLE_MANAGER 2

int build_config = CLIENT_BUILD;
int build_role = ROLE_CUSTOMER;


void action(void);

#endif