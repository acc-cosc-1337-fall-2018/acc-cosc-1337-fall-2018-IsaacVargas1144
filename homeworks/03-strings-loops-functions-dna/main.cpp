#include"dna.h"
#include<iostream>
#include <string>
//write the dna.h include statement here

int main()
{
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG");
	std::cout << point_mutation << std::endl;
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "GAGCCTACTAACGGGAT");
	std::cout << point_mutation << std::endl;
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCAT");
	std::cout << point_mutation << std::endl;
	auto point_mitation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");
	std::cout << point_mutation << std::endl;
				
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:
	/*
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG")
	cout<<point_mutation;
	*/

	return 0;
}