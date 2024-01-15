#include"Vehicle_Storage.h"
#include<stdio.h>
#include<stdbool.h>

VehicleInfo* create_vehicle(Brand* brand, Models* model, float price_per_day) {
	VehicleInfo* vehicle = malloc(sizeof(VehicleInfo));
	vehicle->brand = brand;
	vehicle->model = model;
	vehicle->price_per_day = price_per_day;
	vehicle->isAvailable = false;

	return vehicle;
}
void set_vehicle_available(VehicleInfo* vehicle, bool available) {
	vehicle->isAvailable = available;
}
bool check_vehicle_available(VehicleInfo* vehicle) {
	return vehicle->isAvailable;
}
void add_vehicle_to_incident(VehicleIncident* incident, VehicleInfo vehicle) {

	int i = 0;
	if (incident->num_vehicles == MAX_VEHICLES) {
		printf("Error: Maximum number of vehicles reached.\n");
	}
	else {
		incident->vehicles[incident->num_vehicles++] = vehicle;

	}

}
void remove_vehicle(VehicleIncident* incident, VehicleInfo vehicle) {


	bool isFound = false;
	for (int i = 0; i < incident->num_vehicles; i++)
	{
		if (incident->vehicles[i].vehicle_id == vehicle.vehicle_id) {
			incident->vehicles[i] = incident->vehicles[incident->num_vehicles - 1];
			incident->num_vehicles--;
			break;
		}
	}
	if (!isFound) {
		printf("Error: Vehicle with ID %d not found in incident.\n", vehicle.vehicle_id);
	}
}