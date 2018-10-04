#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice.h"

TEST_CASE("TEST config")
{
	InvoiceDetail detail(10, 10);
	REQUIRE(detail.get_extended_cost() == 100);
}

TEST_CASE("Test invoice get total")
{
	Invoice invoice;

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 3));

	REQUIRE(invoice.get_total() == 325)
}