#ifndef INVOICE_H
#define INVOICE_H
#include "invoice_detail.h"
#include <vector>



class Invoice
{
public:
	void add_invoice_detail(InvoiceDetail detail);
	double  get_total() const;
	friend Invoice operator+(const Invoice& i, const Invoice& i2);

private:
	std::vector<InvoiceDetail>  invoice_details;
	double total{ 0 };
};
#endif //INVOICE_H
