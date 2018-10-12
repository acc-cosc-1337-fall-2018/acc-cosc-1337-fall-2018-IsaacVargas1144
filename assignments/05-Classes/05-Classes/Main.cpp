#include "invoice.h"
#include <iostream>
#include <vector>

int main()
{
	InvoiceUtility invu(25);
	invu.add_invoice_detail(InvoiceDetail(100, 1));

	InvoiceProgress invp(250);
	invp.add_invoice_detail(InvoiceDetail(100, 1));

	std::cout << invu.get_total() << std::endl;

	std::cout << invp.get_total() << std::endl;

	invu.get_total();
	invp.get_total();

	u.get_total();
	p.get_total();

	std::cout << u.get_total() << std::endl;

	std::cout << p.get_total() << std::endl;
	/*Invoice invoice;

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	std::cout << invoice.get_total();*/

	return 0;
}