#pragma once

class IObserver;

class ISubject {
public:
	virtual ~ISubject() {}
	virtual void attach(IObserver*) = 0;
	virtual void detach(IObserver*) = 0;
	virtual void notify() = 0;
};