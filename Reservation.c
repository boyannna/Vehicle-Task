#include"Vehicle_storage.h"
#include"Reservation.h"
#include<stdbool.h>
#include <stdio.h>
#include <stdlib.h>

Reservation* res;

void add_reservation(int vehicle_index, int from, int to) {
    if (res[vehicle_index].vehicleInfo.isAvailable == false) {
        printf("Error: car is not available for the desired period\n");
        return;
    }

    res[vehicle_index].vehicleInfo.isAvailable = false;
    res[vehicle_index].reserved_from = from;
    res[vehicle_index].reserved_to = to;

    FILE* fptr;

    fptr = fopen("D:\\Bo.txt", "w");

    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    fprintf(fptr, "%s from %d to %d", res->vehicleInfo.brand->name, from, to);
    fclose(fptr);

    //Silvet kursor posleden red

    printf("Car reserved successfully\n");
}

void cancel_reservation(int vehicle_index) {
    if (res[vehicle_index].vehicleInfo.isAvailable == true) {
        printf("Error: car is not reserved\n");
        return;
    }

    res[vehicle_index].vehicleInfo.isAvailable = true;
    res[vehicle_index].reserved_from = -1;
    res[vehicle_index].reserved_to = -1;

    FILE* fptr;

    fptr = fopen("D:\\Bo.txt", "w");

    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    fprintf(fptr, "Reservation for %s is cancelled", res->vehicleInfo.brand->name);
    fclose(fptr);

    printf("Reservation cancelled successfully\n");
}

void edit_reservation(int reservation_index) {
    
    int from, to;
    
   // if (CLIENT_BUILD == 0 || SALES_BUILD == 1) { // Trqbva da sa ENUM !
        FILE* fptr = fopen("D:\\Bo.txt", "w");

        if (fptr == NULL) {
            printf("Error opening file\n");
            return;
        } 
        
        fscanf(fptr, "%s %d %d", res[reservation_index].vehicleInfo.brand->name, &res[reservation_index].reserved_from, &res[reservation_index].reserved_to);

        printf("Enter new reservation period (from and to): ");
        scanf_s("%d %d", &from, &to);

        fprintf(fptr, "%s %d %d", res[reservation_index].vehicleInfo.brand->name, from, to);

        fclose(fptr);

        printf("Reservation edited successfully\n");
   // }  
}