#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//int * sort(input[]);

int main()
{
	const int ARRAY_SIZE = 10;
	//int data[ARRAY_SIZE];
	//int sorted[ARRAY_SIZE];
	
	std::vector<int> data;
	
	std::cout << "Sorting Algorithms. Version 0.1" << std::endl;
	std::cout << "Please enter 10 numbers:" << std::endl;
	
	for(int i=0;i<ARRAY_SIZE;i++)
	{
		int numberEntered;
		std::cin >> numberEntered;
		data.push_back(numberEntered);
		std::cout << "Number entered: " + std::to_string(data[i]) << std::endl;
	}
	
	//sorted = sort(data);
	for(int i=0; i<data.size(); ++i)
		std::cout << data[i] << ' ';
	
	
	
	
	
	
	
    return 0;
}

