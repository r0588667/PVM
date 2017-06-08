#pragma once
#ifndef PROPERTY_H
#define PROPERTY_H
#include "Readable.h"
#include "Writeable.h"
#include <string>
class Property : public Writeable,public Readable
{
public:
		Property(std::string value = "");
		Property(const Property& p) = default;
		virtual void write(std::string value) override;
		const virtual std::string read() override;
private:
		std::string value;
};

#endif // !PROPERTY_H
