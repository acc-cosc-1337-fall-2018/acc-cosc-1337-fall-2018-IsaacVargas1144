#include "basics.h"
#include<vector>
#include<iostream>
#include<string>

using std::vector; using std::cout; using std::endl;
using std::string;

int sum_numbers(int num1, int num2)
{
	return num1 + num2;
}

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

void pass_by_val_by_ref(int val, int& ref)
{
	val = 99;
	ref = 99;
}

void const_pass_by_val_by_ref(int val, const int & ref)
{
	val = 99;
	//ref = 99; ref can't be modified because it's a const parameter
}

void initialize_vector_of_ints()
{
	vector<int> numbers = { 5,7,9,4,6,8 };
	numbers.push_back(1);

	for (auto n : numbers)
	{
		cout << n << '\n';
	}

}

void initialize_vector_of_strings()
{
	vector<string> philosophers = { "Kant", "Plato", "Hume", "Kierkegaard" };
	philosophers.push_back("Socrates");

	for (auto p : philosophers)
	{
		cout << p << endl;
	}


}
