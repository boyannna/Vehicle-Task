#include "appconfiguration.h"
#include "brand_info.h"
#include "Vehicle_Storage.h"

void action(void) {

	if (build_config == CLIENT_BUILD) {
		if (build_role == ROLE_CUSTOMER) {

		}
		else if (build_role == ROLE_SALES) {

		}
		else if (build_role == ROLE_MANAGER) {

		}
	}
	else if (build_config == SALES_BUILD) {

		if (build_role == ROLE_CUSTOMER) {

		}
		else if (build_role == ROLE_SALES) {

		}
		else if (build_role == ROLE_MANAGER) {

		}
	}
	else if (build_config == MANAGER_BUILD) {

		if (build_role == ROLE_CUSTOMER) {

		}
		else if (build_role == ROLE_SALES) {

		}
		else if (build_role == ROLE_MANAGER) {

		}
	}
}