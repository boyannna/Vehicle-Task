#pragma once


void display_all_vehicles(struct VehicleInfo* vehicles);

// To do array 

void filter_vehicles_by_model(struct VehicleInfo* vehicles, int num_vehicles, char* model);

void filter_vehicles_by_availability(struct VehicleInfo* vehicles, int num_vehicles, bool isAvailable);

void filter_vehicles_by_category(struct VehicleInfo* vehicles, int num_vehicles, char* category);
 