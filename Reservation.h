#pragma once
#pragma warning(disable : 4996)

typedef struct Reservation {
	VehicleInfo vehicleInfo;
	int reserved_from;
	int reserved_to;
}Reservation;

void add_reservation(int vehicle_index, int from, int to);
void cancel_reservation(int vehicle_index);
void edit_reservation(int reservation_index);