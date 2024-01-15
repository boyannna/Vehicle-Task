#ifndef VEHICLE_STORAGE_H
#define VEHICLE_STORAGE_H

#include"brand_info.h"
#include<stdbool.h>

#define MAX_VEHICLES 10
typedef struct VehicleInfo {
	int vehicle_id;
	Brand* brand;
	Models* model;
	float price_per_day;
	bool isAvailable;
}VehicleInfo;

typedef struct VehicleIncident {
	int incident_id;
	char* location;
	char* description;
	VehicleInfo* vehicles;
	int num_vehicles;
}VehicleIncident;

VehicleInfo* create_vehicle(Brand* brand, Models* model, float price_per_day);
void add_vehicle_to_incident(VehicleIncident* incident, VehicleInfo vehicle);
void remove_vehicle(VehicleIncident* incident, VehicleInfo vehicle);
void disable_model(Models* model);
void set_vehicle_available(VehicleInfo* vehicle, bool available);
bool check_vehicle_available(VehicleInfo* vehicle);

#endif