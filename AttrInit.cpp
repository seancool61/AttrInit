#include "AttrInit.h"

int hello::counter=0;

int main()
{
	std::cout << "Hello World! AttrInit." << std::endl;

	hello h;
	std::cout << h;

	hello h1(3,4);
	std::cout << h1;
	return 0;
}