#ifndef VEHICLE_H
#define VEHICLE_H

#define COLLECTION_INIT_CAPACITY 20


typedef struct Model
{
	char* name;
	char* description;
}Model;

typedef struct Brand
{
	char* name;
	char* description;
}Brand;

typedef struct Vehicle
{
	const struct Brand* brand;
	const struct Model* model;
	int availability;
	double price;
}Vehicle;

typedef struct collection_vehicle
{
	Vehicle* data;
	size_t size;
	size_t capacity;
}collection_vehicle;

void collection_vehicle_init(collection_vehicle* coll);
bool collection_vehicle_empty(collection_vehicle* coll);
size_t collection_vehicle_size(collection_vehicle* coll);
size_t vector_capacity(collection_vehicle* coll);
Vehicle* collection_vehicle_at(collection_vehicle* coll, size_t idx);
Vehicle collection_vehicle_get(collection_vehicle* coll, size_t idx);
void collection_vehicle_set(collection_vehicle* coll, size_t idx, Vehicle value);
void collection_vehicle_double_capacity(collection_vehicle* coll);
void vector_half_capacity(collection_vehicle* coll);
void collection_vehicle_push_back(collection_vehicle* coll, Vehicle value);
void collection_vehicle_clear(collection_vehicle* coll);

void chooseVehicleMenu();
void chooseBrandMenu();
void vehicleDetailsMenu();


#endif