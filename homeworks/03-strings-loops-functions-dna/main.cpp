//write the dna.h include statement here
#include "dna.h"
#include <string>

using std::string; using std::cout; using std::endl;

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:
	/*
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG")
	cout<<point_mutation;
	*/

	std::string dna1 = "GAGCCTACTAACGG";
	std::string dna2 = "CATCGTAATGACGG";

	std::string dna = "CATCGTAATGACGG";

	auto ptmutation = get_point_mutations(dna1, dna2);
	cout << ptmutation << endl;

	auto complement = get_dna_complement(dna);
	cout << complement << endl;

	auto transcribe = transcribe_dna_into_rna(dna);
	cout << transcribe << endl;

	auto gccontent = get_gc_content(dna);
	cout << gccontent << endl;


	return 0;
}