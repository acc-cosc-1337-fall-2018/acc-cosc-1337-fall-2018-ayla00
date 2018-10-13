#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "invoice_detail.h"
#include "invoice.h"
#include "invoice_utility.h"



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

TEST_CASE("test inv operator overloading")
{
	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10);
	invoice.add_invoice_detail(InvoiceDetail(5, 5);
	invoice.add_invoice_detail(InvoiceDetail(100, 2);

	Invoice invoice1;
	invoice1.add_invoice_detail(InvoiceDetail(100, 2);

	Invoice result = invoice + invoice1;
	REQUIRE(result.get_total() == 525);

}

TEST_CASE("test invoice utility")
{
	InvoiceUtility invu(25);
	invu.add_invoice_detail(InvoiceDetail(100, 1));

	REQUIRE(inv.get_total() == 125);

}

TEST_CASE("test invoice_progress get total")
{
	InvoiceProgress invp(250);
	invp.add_invoice_detail(InvoiceDetail(100, 1));

	REQUIRE(inv.get_total() == 150);
}