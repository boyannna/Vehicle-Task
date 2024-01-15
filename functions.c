#include"Vehicle_storage.h"
#include"Reservation.h"
#include"Brand_info.h"
#include<stdio.h>
#include<string.h>
#include "functions.h"

void display_all_vehicles(struct VehicleInfo* vehicles) {

    printf("Brand name: %s\n", vehicles->brand->name);
    printf("Brand description: %s\n", vehicles->brand->description);
    printf("Number of models: %d\n", vehicles->brand->num_models);
    printf("Coupe type: %s\n", vehicles->model->cCoupe_type);
    printf("Doors: %s\n", vehicles->model->cDoors);
    printf("Engine Volume: %s\n", vehicles->model->cEngine_Volume);
    printf("Fuel Consumption: %s\n", vehicles->model->cFuelConsumption);
    printf("Fuel type: %s\n", vehicles->model->cFuel_type);
    printf("Gearbox: %s\n", vehicles->model->cGearbox);
    printf("Model: %s\n", vehicles->model->cModel);
    printf("Seats: %s\n", vehicles->model->cSeats);
    printf("Trunk volume: %s\n", vehicles->model->cTrunc_Volume);
    printf("Reservoir: %s\n", vehicles->model->cVolumeOfTrunck);
    printf("Year: %s\n", vehicles->model->year);
    printf("\n");
}

// To do array 

void filter_vehicles_by_model(struct VehicleInfo* vehicles, int num_vehicles, char* model) {
    /* for (int i = 0; i < num_vehicles; i++) {
         if (strcmp(vehicles[i].model->cModel, model) == 0) {
             printf("Model: %s\n", vehicles[i].model);
             printf("Availability: %d\n", vehicles[i].isAvailable);
             printf("Category: %s\n", vehicles[i].model->cCoupe_type);
             printf("\n");
         }
     }*/

    if (strcmp(vehicles->model->cModel, model) == 0) {
        printf("Model: %s\n", vehicles->model);
        printf("Availability: %d\n", vehicles->isAvailable);
        printf("Category: %s\n", vehicles->model->cCoupe_type);
        printf("\n");
    }

}

void filter_vehicles_by_availability(struct VehicleInfo* vehicles, int num_vehicles, bool isAvailable) {
    for (int i = 0; i < num_vehicles; i++) {
        if (vehicles[i].isAvailable == isAvailable) {
            printf("Model: %s\n", vehicles[i].model);
            printf("Availability: %d\n", vehicles[i].isAvailable);
            printf("Category: %s\n", vehicles[i].model->cCoupe_type);
            printf("\n");
        }
    }
}

void filter_vehicles_by_category(struct VehicleInfo* vehicles, int num_vehicles, char* category) {
    for (int i = 0; i < num_vehicles; i++) {
        if (strcmp(vehicles[i].model->cCoupe_type, category) == 0) {
            printf("Model: %s\n", vehicles[i].model);
            printf("Availability: %d\n", vehicles[i].isAvailable);
            printf("Category: %s\n", vehicles[i].model->cCoupe_type);
            printf("\n");
        }
    }
}
