#include "revert_string.h"

void RevertString(char* str)
{
	int counter = 0;


	while (str[counter] != '\0') {
		counter++;
	}

	char tmp1;
	char tmp2;

		for (int i = 0; i < counter / 2; i++) {

			tmp1 = str[counter - i - 1];
			tmp2 = str[i];
			str[i] = tmp1;
			str[counter - i - 1] = tmp2;

		}
}

