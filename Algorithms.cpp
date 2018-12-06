#include <iostream>
#include <fstream>
#include <string>

int main()
{
	const int ARRAY_SIZE = 10;
	int data[ARRAY_SIZE];
	
	std::cout << "Sorting Algorithms. Version 0.1" << std::endl;
	std::cout << "Please enter 10 numbers:" << std::endl;
	
	for(int i=0;i<ARRAY_SIZE;i++)
	{
		std::cin >> data[i];
		std::cout << "Number entered: " + std::to_string(data[i]) << std::endl;
	}
	
	
	
	
    return 0;
}