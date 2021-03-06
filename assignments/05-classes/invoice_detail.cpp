#include "invoice_detail.h"

using std::cout;

double InvoiceDetail::get_extended_cost() const
{
	return cost * units;
}

std::istream & operator>> (std::istream& in, InvoiceDetail& d)
{
	std::cout << "enter cost: ";
	in >> d.cost; //capturing cost and units
	std::cout << "enter units: ";
	in >> d.units;

	return in;
}
