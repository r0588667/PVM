#ifndef INFINITESEQUENCE_H
#define INFINITESEQUECE_H
#include <memory>
class InfiniteSequence
{
public:
	InfiniteSequence() = default;
	std::shared_ptr<InfiniteSequence> get_next();
	int& value();
	int  value() const;
private:
	std::shared_ptr<InfiniteSequence> next;
	int value;
};
#endif // !INFINITESEQUENCE_H
