#include "invoice_progress.h"
#include "invoice_detail.h"

double InvoiceProgress::get_total() const
{
	return fixed_price = Invoice::get_total();
}