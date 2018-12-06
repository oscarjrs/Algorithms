#include <iostream>
#include <fstream>
#include <string>

int main()
{
	const int ARRAY_SIZE = 5;
	int data[ARRAY_SIZE];
	
	std::cout << "Sorting Algorithms" << std::endl;
	std::cout << "Please enter 5 numbers:" << std::endl;
	
	for(int i=0;i<ARRAY_SIZE;i++)
	{
		std::cin >> data[i];
		std::cout << "Number entered: " + std::to_string(data[i]) << std::endl;
	}
	
	
	
	
    return 0;
}