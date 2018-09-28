#include "invoice_detail.h"

double InvoiceDetail::get_extended_cost()
{
	return cost * units;
}
