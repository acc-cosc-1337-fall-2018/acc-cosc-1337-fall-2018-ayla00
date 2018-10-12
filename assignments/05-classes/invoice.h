#ifndef INVOICE_H
#define INVOICE_H
#include "invoice_detail.h"
#include "invoice_progress.h"
#include <vector>



class Invoice
{
public:
	Invoice() = default;
	Invoice(double a) : total(a){}
	void add_invoice_detail(InvoiceDetail detail);
	virtual double  get_total() const;
	friend Invoice operator+(const Invoice& i, const Invoice& i2);
	//Invoice operator+=(const Invoice& i2);

private:
	std::vector<InvoiceDetail>  invoice_details;
	double total{ 0 };
};
#endif //INVOICE_H
