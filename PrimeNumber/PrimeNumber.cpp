// PrimeNumber.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	unsigned long long nLoop;
	unsigned long long nMod;

	printf("1,2,");

	for (nLoop = 3; nLoop < (1844674407370955161 - 2); nLoop++) {
	//for (nLoop = 3; nLoop < (100); nLoop++) {
		for (nMod = 2; nMod < nLoop; nMod++) {
			if ((nLoop % nMod) == 0) {
				break;
			}
		}
		if (nMod == nLoop) {
			printf("%lld,", nLoop);
		}
	}

	getchar();

    return 0;
}

