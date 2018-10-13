#include<math.h>
#include "dna.h"
#include <iostream>
#include <string>

using std::string;

int get_point_mutations(std::string dna1, std::string dna2)
{	//write the function code 
	//dna1 = "GAGCCTACTAACGGGAT";
	//dna2 = "CATCGTAATGACGGCCT";
	int i = 0;
	int hdist = 0;
	auto size1 = dna1.size();
	auto size2 = dna2.size();

	if (size1 == size2)
	{
		while (dna1[i] != '\0' && dna2[i] != '\0')
		{
			if (dna1[i] != dna2[i])
			{
				hdist = hdist + 1;
				i = i + 1;
			}
			else
				i = i + 1;
		}

		return hdist;
	}
	else
		return -1;
}


//write function code for std::string get_dna_complement(std::string dna)



string get_dna_complement(string dna)
{
	int i = 0;//counter for while dna_complement loop
	auto size = dna.size();
	string reversedna(size, ' ');//variable what will save the reverse of dna strand
	int s = size - 1; //counter for while loop reversing dna
	int r = 0;//another counter for while loop reversing dna
	string dna_complement(size, ' ');//variable that will save the complement of the reversed dna strand

	while (dna[i] != '\0')
	{
		reversedna[r] = dna[s];
		r = r + 1;
		s = s - 1;

		if (reversedna[i] == 'A')
		{
			dna_complement[i] = 'T';
			i = i + 1;
		}
		else if (reversedna[i] == 'T')
		{
			dna_complement[i] = 'A';
			i = i + 1;
		}
		else if (reversedna[i] == 'C')
		{
			dna_complement[i] = 'G';
			i = i + 1;
		}
		else if (reversedna[i] == 'G')
		{
			dna_complement[i] = 'C';
			i = i + 1;
		}

	}

	return dna_complement; //returns a string that is the reverse complement of original dna strand
}

//write function code for std::string transcribe_dna_into_rna(std::string dna);



std::string transcribe_dna_into_rna(std::string dna)
{

	int i = 0;
	auto size = dna.size();
	std::string rna(size, ' ');

	while (dna[i] != '\0')
	{
		if (dna[i] == 'T')
		{
			rna[i] = 'U';
			i = i + 1;
		}
		else
		{
			rna[i] = dna[i];
			i = i + 1;
		}
	}


	return rna;
}


double get_gc_content(std::string dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type
	
	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1
		if (s == 'C' || s == 'G')
		{
			gc_count = gc_count + 1;
		}
	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size)) * 100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}
