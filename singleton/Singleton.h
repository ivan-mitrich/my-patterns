#pragma once
class Singleton
{
private:
	Singleton() {}
public:
	Singleton& operator=(const Singleton& s) = delete;
	Singleton(const Singleton& s) = delete;
	Singleton& operator=(Singleton&& s) = delete;
	Singleton(Singleton&& s) = delete;

	static Singleton& getInstance() {
		static Singleton singleton;
		return singleton;
	}
};

