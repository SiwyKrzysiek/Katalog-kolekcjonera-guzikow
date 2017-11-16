#include "Data.h"

char *dataToString(char slowo[11], struct Data data)
{
	sprintf(slowo, "%2d-%2d-%4d", data.dzien, data.miesiac, data.rok);
	return slowo;
}