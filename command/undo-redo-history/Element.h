#pragma once
#include <iostream>
#include <string>
struct Position {
	int x; 
	int y;
	Position(int newX, int newY) : x(newX), y(newY) {}
	friend std::ostream& operator<<(std::ostream& out, const Position& pos);
};

std::ostream& operator<<(std::ostream& out, const Position& pos) {
	out << "[ " << pos.x << "; " << pos.y << " ]";
}

class Element
{
private:
	Position pos;
	std::string name;
public:
	Element(const std::string &newName) : pos(0, 0), name(newName) {}
	void move(const Position& newPos) { 
		std::cout << "Element " << name << " changed its position from " << pos << " to " << newPos << "\n"; 
		pos = newPos; 
	}

	std::string getName() const { return name; }
};

