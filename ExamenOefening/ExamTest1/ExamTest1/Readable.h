#ifndef READABLE_H
#define READABLE_H
#include <string>
class Readable
{
public:
	virtual ~Readable();
	const virtual std::string read();
};

#endif // !PROPERTY_H