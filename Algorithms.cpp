#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void insertionSort(std::vector<int>&);
int generateData(int, std::string);

int main()
{
	const int ARRAY_SIZE = 10;
	//int data[ARRAY_SIZE];
	//int sorted[ARRAY_SIZE];
	
	std::vector<int> data;
	std::vector<int> sortedData;
	
	std::cout << "Sorting Algorithms. Version 0.1" << std::endl;
	/*std::cout << "Please enter 10 numbers:" << std::endl;
	
	for(int i=0;i<ARRAY_SIZE;i++)
	{
		int numberEntered;
		std::cin >> numberEntered;
		data.push_back(numberEntered);
		std::cout << "Number entered: " + std::to_string(data[i]) << std::endl;
	}
	*/
	
	generateData(10, "data.txt");
	insertionSort(data);
	
	for(int j=0;j<data.size();j++)
		std::cout << data[j] << " ";
	
	return 0;
}

void insertionSort(std::vector<int>& input) {
    
	for(int j=1;j<input.size();j++)
	{
		int key = input[j];
		int i = j-1;
		while(i >= 0 && input[i] > key)
		{
			input[i+1] = input[i];
			i--;
		}
		input[i+1] = key;
	}
	
}

// Generate a file with a list of random numbers
int generateData(int count, std::string filename)
{
	std::ofstream fout;
	fout.open(filename);
	for(int i=1;i<=count;i++)
		fout<< (rand() % 10 + 1) << std::endl;
	fout.close();
	return 0;
}