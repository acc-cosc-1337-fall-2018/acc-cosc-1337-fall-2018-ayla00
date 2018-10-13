
#include <string>
#include <vector>
#include "vectors.h"
#include <math.h>


using std::vector; using std::string;


int get_max_from_vector(vector<int>& numbers)
{
	int i = 0; //initialize to first element in vector
	int j = 1;  //initialize to second element in vector (so that j = i + 1)
	auto limit = numbers.size() - 1; //limit is last index of vector

	while (j <= limit)
	{
		if (numbers[i] > numbers[j])
			j = j + 1;
		else if ((numbers[i] <= numbers[j]) && (j <= limit))
		{
			i = j; //swaps indexes so as to drop previous number and use the bigger on
			j = j + 1;
		}
	}



	return numbers[i];
}

int sum_of_squares(vector<int>& numbers)
{
	int sum = 0;
	int i = 0;
	auto sizevector = numbers.size();

	while (i <= (sizevector - 1)) // indexing starts at 0 and ends at (sizeofvector - 1)
	{
		sum = sum + (numbers[i] * numbers[i]);
		i = i + 1;
	}

	return sum;
}

int replace(vector<string>& strings, const string& old, const string& new_val)
{
	auto size = strings.size();
	int s = 0;
	while (s < size)
	{
		if (strings[s] == old)
		{
			strings[s] = new_val;
			s = s + 1;
		}
		else
			s = s + 1;


	}

	return (s - 1);
	// the one is subtracted from index as by the time the value we want from s (where you find old)
	// has been augmented by one, so this is necessary to catch correct index

}

int is_prime(int n)
{
	bool torf = true; //initialized to true, if not true value will be changed in due time, if not changed it's a prime
	int counter = 3;  //initialize after 3 because the first two conditions on if loop takes care 
	auto remainder = -99; //initialized to quasirandom value so that while loop below run 



	if (n == 1) //takes care of 1, as it is not a prime number
		torf = false;
	else if ((n == 2) || (n == 3)) //takes care of 2 and 3 positive integers
		torf = true;
	else if ((n % 2) == 0)   //takes care of all even numbers
		torf = false;
	else
	{
		while (counter < n)
		{
			if (remainder != 0)
			{
				remainder = n % counter;
				counter = counter + 1;
			}
			else
			{
				counter = n + 1;  //this condition will terminate loop
				torf = false;
			}
		}

	}

	return torf;
}

vector<int> vector_of_primes(int num)
{
	int primenum = 1; //initialize variable which will populate primes vector
	vector<int> primes; //declare and initialize vector

	while (primenum <= num)
	{
		bool isprime = is_prime(primenum);

		if (isprime == true)
		{
			primes.push_back(primenum);
			primenum = primenum + 1;
		}
		else
			primenum = primenum + 1;

	}

	return primes;
}






/*
int get_max_from_vector(vector<int>& numbers)
{
	//write your code here

	return 0;
}

//write the code for sum_of_squares function here



//write the code for function replace here
void replace(vector<string>& strings, const string& old, const string& new_val)
{
	//write code here. 
	//Remember passing by reference without keyword const makes the string vector
	//read/write meaning you can modify strings in the vector
	//Also there is no need to return the strings vector because a reference
	//points to a previously declared vector of strings variable(see test case 
	//in vectors_test.cp)


}

//write is_prime function code here




//write vector_of_primes function code here
*/