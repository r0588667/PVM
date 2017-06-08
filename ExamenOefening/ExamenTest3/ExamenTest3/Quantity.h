#ifndef QUANTITY_H
#define QUANTITY_H
#include <string>
#include <memory>
class Quantity
{
public:
	Quantity(double amount,std::string unit);
	const double get_amount();
	const std::string get_unit();
	std::shared_ptr<Quantity> add(std::shared_ptr<Quantity> q);
private:
	double amount;
	std::string unit;
};
#endif // !QUANTITY_H
