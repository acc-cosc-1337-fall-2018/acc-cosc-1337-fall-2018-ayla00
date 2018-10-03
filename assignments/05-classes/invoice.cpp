#include "invoice.h"

#include <vector>

void Invoice::add_invoice_detail(InvoiceDetail detail)
{
	invoice_details.push_back(detail);

}

double  get_total(vector<InvoiceDetail> invoice_details)
{
	double total{ 0 };

	for (auto detail : invoice_details)
	{
		total += detail.get_extended_cost();
	}

}
