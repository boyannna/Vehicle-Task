#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"Vehicle.h"

void collection_vehicle_init(collection_vehicle* coll)
{
	coll->data = NULL;
	coll->size = 0;
	coll->capacity = COLLECTION_INIT_CAPACITY;
	coll->data = (Vehicle*)malloc(sizeof(Vehicle) * coll->capacity);
}
bool collection_vehicle_empty(collection_vehicle* coll)
{
	return coll->size == 0;
}
size_t collection_vehicle_size(collection_vehicle* coll)
{
	return coll->size;
}
size_t vector_capacity(collection_vehicle* coll)
{
	return coll->capacity;
}
Vehicle* collection_vehicle_at(collection_vehicle* coll, size_t idx)
{
	return &coll->data[idx];
}
Vehicle collection_vehicle_get(collection_vehicle* coll, size_t idx)
{
	return *collection_vehicle_at(coll, idx);
}
void collection_vehicle_set(collection_vehicle* coll, size_t idx, Vehicle value)
{
	*collection_vehicle_at(coll, idx) = value;
}
void collection_vehicle_double_capacity(collection_vehicle* coll)
{
	size_t newCapacity = coll->capacity * 2;
	Vehicle* newArray = (Vehicle*)malloc(sizeof(Vehicle) * newCapacity);
	for (size_t i = 0; i != coll->size; i++)
	{
		newArray[i] = coll->data[i];
	}
	coll->data = newArray;
	coll->capacity = newCapacity;
}

void vector_half_capacity(collection_vehicle* coll)
{
	if (coll->capacity <= COLLECTION_INIT_CAPACITY)
		return;

	size_t newCapacity = coll->capacity / 2;
	Vehicle* newArray = (Vehicle*)malloc(sizeof(Vehicle) * newCapacity);
	size_t newSize = min(coll->size, newCapacity);
	for (size_t i = 0; i != newSize; i++)
	{
		newArray[i] = coll->data[i];
	}

	free(coll->data);
	coll->data = newArray;
	coll->capacity = newCapacity;
	coll->size = newSize;
}

void collection_vehicle_push_back(collection_vehicle* coll, Vehicle value)
{
	if (coll->size >= coll->capacity)
	{
		collection_vehicle_double_capacity(coll);
	}
	coll->data[coll->size++] = value;
}

void collection_vehicle_clear(collection_vehicle* coll)
{
	coll->size = 0;
	coll->capacity = COLLECTION_INIT_CAPACITY;

	free(coll->data);
	coll->data = NULL;

	collection_vehicle_init(coll);
}

void mainManu(void)
{
	char userChoise;
	printf("Press 1 to choose vehicle\n");
	printf("Press 2 to choose vehicle by brand\n");
	printf("Press q to quit\n");
	scanf(" %c", &userChoise);

	while (userChoise != 'q')
	{
		if (userChoise == '1')
		{
			chooseVehicleMenu();
		}
		else if (userChoise == '2')
		{
			chooseBrandMenu();
		}
	}
}
void chooseVehicleMenu(void)
{

}
void chooseBrandMenu(void)
{

}
void vehicleDetailsMenu(void)
{

}