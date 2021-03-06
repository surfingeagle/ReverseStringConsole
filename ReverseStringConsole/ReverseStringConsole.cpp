// ReverseStringConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
// #include <stdexcept>
// using namespace std;

int main(int argc, char * argv[])
{
	try
	{
		// test error
		// throw std::exception("Something Invalid");

		// Use first argument
		if (argv[1] != NULL)
		{
			char *InputString = argv[1];
			int LastIndex = (int)strlen(InputString) - 1;
			// swap characters using XOR at first and last index
			// then traverse to the middle
			for (int StartIndex = 0; StartIndex < LastIndex; StartIndex++)
			{
				InputString[StartIndex] = InputString[StartIndex] ^ InputString[LastIndex];
				InputString[LastIndex] = InputString[LastIndex] ^ InputString[StartIndex];
				InputString[StartIndex] = InputString[LastIndex] ^ InputString[StartIndex];
				LastIndex--;
			}
			// output reversed string
			// printf("%s\n", InputString);
			std::cout << InputString << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		std::cerr << "Type: " << typeid(e).name() << std::endl;
	}
	return 0;
}
