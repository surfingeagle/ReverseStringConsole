// ReverseStringConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>

int main(int argc, char * argv[])
{
	// Use first argument
	if (argv[1] != NULL) 
	{
		char *szInputString = argv[1];
		int nLast = (int)strlen(szInputString) - 1;
		// swap characters using XOR at first and last index
		// then traverse to the middle
		for (int nStart = 0; nStart < nLast; nStart++)
		{
			szInputString[nStart] = szInputString[nStart] ^ szInputString[nLast];
			szInputString[nLast] = szInputString[nLast] ^ szInputString[nStart];
			szInputString[nStart] = szInputString[nLast] ^ szInputString[nStart];
			nLast--;
		}
		// output reversed string
		printf("%s\n", szInputString);
	}
	return 0;
}
