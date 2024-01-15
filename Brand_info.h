#pragma once

typedef struct Models {
	char* cModel;
	char* cCoupe_type;
	char* cFuel_type;
	char* cGearbox;
	char* cDoors;
	char* cSeats;
	char* cVolumeOfTrunck;
	char* cFuelConsumption;
	char* cTrunc_Volume;
	char* cEngine_Volume;
	char* year;
}Models;

typedef struct Brand {
	char* name;
	char* description;
	int num_models;
	//Models* models;
}Brand;