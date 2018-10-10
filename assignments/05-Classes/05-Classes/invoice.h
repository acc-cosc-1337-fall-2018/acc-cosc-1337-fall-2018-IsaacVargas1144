#ifndef INVOICE_H
#define INVOICE_H
#include "invoice_detail.h"
class Invoice
{
public:
	void add_invoice_detail(InvoiceDetail, detail);
	double get_total()const;

private:
	std::vector<InvoiceDetail> invoice_details;
};

void Invoice::add_invoice_detail(InvoiceDetail, detail)
{
}

inline double Invoice::get_total() const
{
	double total {0}

	return 0.0;
}

#endif //INVOICE_H