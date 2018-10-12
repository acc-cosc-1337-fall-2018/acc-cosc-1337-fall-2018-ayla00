#include "invoice.h"
#include "invoice_utility.h"
#include "invoice_detail.h"
#include "invoice_progress.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{

	
	Invoice invoice;

	InvoiceDetail detail;
	std::cin >> detail;

	invoice.add_invoice_detail(detail);
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice invoice1;
	invoice1.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;
	std::cout<<result.get_total();

	InvoiceUtility invu(25);
	invu.add_invoice_detail(InvoiceDetail(100, 1));
	std::cout << invu.get_total();

	InvoiceProgress invp(250);
	invp.add_invoice_detail(InvoiceDetail(100, 1));

	invu.get_total();
	invp.get_total();

	Invoice& u = invu;
	Invoice& p = invp;
	u.get_total();
	p.get_total();

	std:cout << u.get_total() << std::endl;
	std::cout << p.get_total() << std::endl;




	return 0;
	
}
