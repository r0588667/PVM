#include "stdafx.h"
#include "Property.h"
#include <string>
Property::Property(std::string value) : value(value)
{

}
Property::Property(const Property& p)
{
}
void Property::write(std::string value)
{
	this->value = value;
}
const std::string Property::read()
{
	return value;
}