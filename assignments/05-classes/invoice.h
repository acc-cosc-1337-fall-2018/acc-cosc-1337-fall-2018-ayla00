#ifndef INVOICE_H
#define INVOICE_H
#include "invoice_detail.h"
#include <vector>



class Invoice
{
public:
	void add_invoice_detail(InvoiceDetail detail);
	double  get_total();

private:
	std::vector<InvoiceDetail>  invoice_details;
};
#endif //INVOICE_H
