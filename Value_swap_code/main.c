#include <stdio.h>



void swapValues(int*, int*);

int main (int argc, char * argv[])
{

	int firstValue = 35;
	int secondValue = -97;

	printf("memory places before swap: %p and %p\n", (void*)&firstValue, (void*)&secondValue);

	swapValues(&firstValue, &secondValue);
	
	printf("Value and adress of fist   value:%d \t %p \n",firstValue, (void*)&firstValue);
	printf("Value and adress of second value:%d \t %p \n",secondValue, (void*)&secondValue);
	
}


void swapValues(int *ptnVal_0, int *ptnVal_1){

	int temp;

	temp = *ptnVal_0;
	*ptnVal_0 = *ptnVal_1;
	*ptnVal_1 = temp;
	
}
