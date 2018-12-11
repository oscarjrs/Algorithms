#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

void insertionSort(std::vector<int>&);
int generateData(int, std::string);
bool fexists(const std::string&);

int main()
{
	const int ARRAY_SIZE = 10;
	//int data[ARRAY_SIZE];
	//int sorted[ARRAY_SIZE];
	
	std::vector<int> data;
	std::vector<int> sortedData;
	
	std::vector<int>::iterator i;
	
	std::cout << "Sorting Algorithms. Version 0.1" << std::endl;
	
	if(!fexists("data.txt"))
	{
		std::cout << "Data.txt does not exist!" << std::endl;
		std::cout << "Generating data.txt with random integers..." << std::endl;
		generateData(100, "data.txt");
	}
	
	// File that contains integers to be sorted, one per line
	std::ifstream myfile("data.txt");
	
	std::string line;
	std::vector<std::string> myLines;
	while (std::getline(myfile, line))
	{
	   data.push_back(std::stoi(line));
	}
	
	
	insertionSort(data);
	
	for(i = data.begin();i != data.end();++i)
		std::cout << *i << " ";
	
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
		fout<< (rand() % 100 + 1) << std::endl;
	fout.close();
	return 0;
}

bool fexists(const std::string& filename) {
  std::ifstream ifile(filename.c_str());
  return (bool)ifile;
}