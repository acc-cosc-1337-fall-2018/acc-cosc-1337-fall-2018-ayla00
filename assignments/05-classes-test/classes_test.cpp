#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "invoice_detail.h"


TEST_CASE("test get_extended")
{
	InvoiceDetail invoice(10, 10);
	REQUIRE(invoice.get_extended_cost() == 100);
}