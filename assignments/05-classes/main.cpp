#include "invoice_detail.h"
#include <iostream>

using std::cout;

int main()
{
	InvoiceDetail invoice(10,10);

	double printinv = invoice.get_extended_cost();
	cout << printinv;

	return 0;

}