#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "invoice_detail.h"
#include "invoice.h"



TEST_CASE("test get_extended")
{
	InvoiceDetail invoice(10, 10);
	REQUIRE(invoice.get_extended_cost() == 100);
}

TEST_CASE("Test")
{
	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10);
	invoice.add_invoice_detail(InvoiceDetail(5, 5);
	invoice.add_invoice_detail(InvoiceDetail(100, 2);

	REQUIRE(invoice.get_total() == 325);

}