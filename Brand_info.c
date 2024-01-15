#include"Brand_info.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

Models model;
Brand brands[] = {
	{
		.name = "Opel",
		.description = "Ford Motor Company is an American multinational automaker that has been in business for over 100 years.",
		.num_models = 3,
		.models.cModel = "Astra",
		.models.year = "2022",
		.models.cCoupe_type = "Hatchback",
		.models.cFuel_type = "Gasoline",
		.models.cGearbox = "Automatic",
		.models.cDoors = "5",
		.models.cSeats = "5",
		.models.cVolumeOfTrunck = "52 L",
		.models.cFuelConsumption = "5.7L/100 km",
		.models.cTrunc_Volume = "422-1339 L",
		.models.cEngine_Volume = "1199 cm 3"
	},
	{
		.name = "VW",
		.description = "Volksvagen Golf 8 is the beginning of a whole new generation of models.",
		.num_models = 2,
		.models.cModel = "Golf",
		.models.year = "2021",
		.models.cCoupe_type = "Hatchback",
		.models.cFuel_type = "Petrol",
		.models.cGearbox = "Automatic",
		.models.cDoors = "5",
		.models.cSeats = "5",
		.models.cVolumeOfTrunck = "50 L",
		.models.cFuelConsumption = "4.1L/100 km",
		.models.cTrunc_Volume = "381-1237 L",
		.models.cEngine_Volume = "1498 cm 3"
	},
	{
		.name = "Toyota",
		.description = "Toyota Corolla Hybrid for rent combines sporty style with practicality in a compact vehicle.",
		.num_models = 2,
		.models.cModel = "Corolla",
		.models.year = "2022",
		.models.cCoupe_type = "Sedan",
		.models.cFuel_type = "Gasoline/Electricity",
		.models.cGearbox = "Automatic",
		.models.cDoors = "4",
		.models.cSeats = "5",
		.models.cVolumeOfTrunck = "43 L",
		.models.cFuelConsumption = "3.4L/100 km",
		.models.cTrunc_Volume = "471 L",
		.models.cEngine_Volume = "1798 cm 3"
	}
};