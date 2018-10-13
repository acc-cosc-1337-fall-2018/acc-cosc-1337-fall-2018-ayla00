
#include <string>
#include <vector>
#include <iostream>
#include "vectors.h"

using std::vector; using std::string; using std::cout; using std::endl;

int main()
{

	vector<int> numbers{ 4, 5, 1, 50, 60, 77, 0 };  //input for get_max_from_vector

	int maxnum = get_max_from_vector(numbers);
	cout << "the maximum number the vector is: " << maxnum << endl << endl;


	vector<int> numeros{ 2, 3, 4 }; //input for sum_of_squares

	int suma = sum_of_squares(numeros);
	cout << "the sum of squares is: " << suma << endl << endl;

	vector<string> strings{ "Joe", "joe", "mary" };
	const string& old = "joe";
	const string& new_val = "John";


	int z = replace(strings, old, new_val);
	int k = 0;
	auto strsize = strings.size();
	cout << "old argument: " << old << " replaced by: " << strings[z] << endl << endl;
	//string[z] is where the last value of old was located before function was called

	while (k < strsize)
	{
		cout << "strings[" << k << "] is: " << strings[k] << endl;
		k = k + 1;
	}


	int n = 3; // input for is_prime
	bool prime = is_prime(n);

	if (prime == true) // choosing the output on screen according to is_prime outcome
		cout << "the number " << n << " is a prime number" << endl << endl;
	else
		cout << "the number " << n << " is NOT a prime number" << endl << endl;


	int num = 50;
	vector<int> primes = vector_of_primes(num);
	int w = 0;
	cout << "the vector for the primes numbers from 1 to " << num << " is :" << endl;
	auto vprimesize = primes.size() - 1;


	while (w <= vprimesize)
	{
		cout << "primes[" << w << "] is: " << primes[w] << endl;
		w = w + 1;
	}


	return 0;

}





/*write include statement for vectors header
//write include statement for cout object


//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max


	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result


	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"

	
	//write code to call is_prime with value 3 output result


	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector


	return 0;
}
*/