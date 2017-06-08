#ifndef WRITEABLE_H
#define WRITEABLE_H
#include <string>
class Writeable
{
	public:
		virtual ~Writeable();
		virtual void write(std::string value);
};

#endif // !WRITEABLE_H