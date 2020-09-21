//============================================================================
// Name        : HW2.cpp
// Author      : Martin Baird
// Description : Hello World in C, Ansi-style
//============================================================================


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;


int main(int argc, char **argv)
{
	std::vector<std::string> names;

	for	(int i = 0; i < 10; i++)
	{
		std::string name;
		cout << "Please enter a name: ";
		std::getline(cin, name);
		names.push_back(name);

	}


	return 0;
}
