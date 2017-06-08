#include "stdafx.h"
#include "Quantity.h"
Quantity::Quantity(double amount, std::string unit) : amount(amount), unit(unit)
{

}
const double Quantity::get_amount()
{
	return amount;
}
const std::string Quantity::get_unit()
{
	return unit;
}
std::shared_ptr<Quantity> Quantity::add(std::shared_ptr<Quantity> q)
{
	if (q == nullptr)
	{
		throw new std::runtime_error("Error");
	}
	this->amount = q.get()->amount;
}