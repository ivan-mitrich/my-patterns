#pragma once
class MenuItem;
class iIterator
{
public:
	virtual MenuItem next() = 0;
	virtual bool hasNext() = 0;
	virtual ~iIterator() {}
};

