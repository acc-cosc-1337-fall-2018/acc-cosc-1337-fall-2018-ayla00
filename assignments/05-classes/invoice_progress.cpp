#include "invoice_progress.h"
#include "invoice.h"

double InvoiceProgress::get_total() const
{
	return fixed_price - Invoice::get_total();
}