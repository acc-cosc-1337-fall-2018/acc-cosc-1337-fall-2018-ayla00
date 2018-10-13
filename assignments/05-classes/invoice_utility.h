#ifndef INVOICE_UTILITY_H
#define INVOICE_UTILITY_H

#include "invoice.h"

class InvoiceUtility : public Invoice
{
public:
	InvoiceUtility(double fc) : fixed_cost(fc) {}
	double get_total() const;
	

private:
	double fixed_cost;
};
#endif // INVOICE_UTILITY_H
