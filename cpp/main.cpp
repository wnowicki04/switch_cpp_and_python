#include <iostream>
#include <string>
#include "functions.h" //H_FUNCTIONS

int value; //@ref H_FUNCTIONS

int main()
{
	//root function body
	assign(value); //@ref H_FUNCTIONS
	
	switch (value) //switch function
	{
		case 0:
			std::cout << "false" << std::endl;
			break;
		case 1:
			std::cout << "true" << std::endl;
			break;
		default:
			std::cout << "undefined" << std::endl;
			break;
	}
	
	std::system("Pause>nul");
	//getchar();
	return 0;
}
