#include<stdio.h>
#include"Vehicle_storage.h"
#include"functions.h"

int main() {
	Models* models2;
	Brand* brand2;

	VehicleInfo v = {
		.isAvailable = true,
		.price_per_day = 12,

		.brand = brand2->description = "Opel Motor Company is an American multinational automaker that has been in business for over 100 years.",
		.brand = brand2->num_models = 3,
		.brand = brand2->name = "VW",

		.model = models2->year = "2022",
		.model = models2->cModel = "Pasat",
		.model = models2->cCoupe_type = "Hatchback",
		.model = models2->cFuel_type = "Gasoline",
		.model = models2->cGearbox = "Automatic",
		.model = models2->cDoors = "5",
		.model = models2->cSeats = "5",
		.model = models2->cVolumeOfTrunck = "52 L",
		.model = models2->cFuelConsumption = "5.7L/100 km",
		.model = models2->cTrunc_Volume = "422-1339 L",
		.model = models2->cEngine_Volume = "1199 cm 3"
	};

	//display_all_vehicles(&v);
	char* name = "Pasat";
	filter_vehicles_by_model(&v, 1, name);
	return 0; 
}