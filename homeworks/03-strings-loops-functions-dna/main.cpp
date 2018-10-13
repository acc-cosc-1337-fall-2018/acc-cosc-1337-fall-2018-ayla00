//write the dna.h include statement here
#include "dna.h"
#include <string>
#include <iostream>

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
	string dna1 = "GAGCCTACTAACGGGAT";
	string dna2 = "CATCGTAATGACGGCCT";

	std::string dna = "CATCGTAATGACGG";

	auto ptmutation = get_point_mutations(dna1, dna2);
	cout << endl << endl << "          DNA INFORMATION" << endl;
	cout << "***********************************************************" << endl;
	cout << endl << endl;
	cout << "hamming distance dH(s,t) = " << ptmutation << endl << endl;
	cout << "***********************************************************" << endl;

	string complement = get_dna_complement(dna);
	cout << "the complement of dna strand " << dna << " is: " << endl;
	cout << endl;
	cout << complement << endl << endl;
	cout << "***********************************************************" << endl;

	auto transcribe = transcribe_dna_into_rna(dna);
	cout << "the rna transcription of dna strand " << dna << " is: " << endl;
	cout << endl;
	cout << transcribe << endl << endl;
	cout << "***********************************************************" << endl;

	auto gccontent = get_gc_content(dna);
	cout << "the gc-content of dna strand " << dna << "is: " << gccontent << endl;



	return 0;
}
