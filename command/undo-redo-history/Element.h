#pragma once
#include <iostream>
#include <string>
struct Position {
	int x; 
	int y;
	Position(int newX, int newY) : x(newX), y(newY) {}
	operator std::string() { return "[ " + std::to_string(x) + "; " + std::to_string(y) + " ]"; }
	friend std::ostream& operator<<(std::ostream& out, const Position& pos);
	friend Position operator+(const Position& p1, const Position& p2);
	friend Position operator-(const Position& p);
};

Position operator-(const Position& p) {
	return Position(-p.x, -p.y);
}

Position operator+(const Position& p1, const Position& p2) {
	return Position(p1.x + p2.x, p1.y + p2.y);
}

std::ostream& operator<<(std::ostream& out, const Position& pos) {
	out << pos;
	return out;
}

class Element
{
private:
	Position pos;
	std::string name;
public:
	Element(const std::string &newName) : pos(0, 0), name(newName) {}
	void move(const Position& newPos) { 
		auto previousPos = pos;
		pos = newPos + pos;
		std::cout << "Element " << name << " changed its position from " << std::string(previousPos) << " to " << std::string(pos) << "\n";
	}

	std::string getName() const { return name; }
};

