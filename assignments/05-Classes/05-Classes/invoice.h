#ifndef INVOICE_H
#define INVOICE_H
#include <vector>
class Invoice
{
public:
	Invoice() = default;
	Invoice(double a) : total(a) {}
	void add_invoice_detail(InvoiceDetail, detail);
	virtual double get_total()const;
	friend Invoice operator+(const Invoice& i, const Invoice& i2);
	Invoice operator+=(const Invoice& i2);

private:
	std::vector<InvoiceDetail> invoice_details;
	double total{ 0 };
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