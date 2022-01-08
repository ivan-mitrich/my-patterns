#pragma once
class ISimpleCommand
{
public:
	virtual void execute() = 0;
	virtual ~ISimpleCommand() {}
};

