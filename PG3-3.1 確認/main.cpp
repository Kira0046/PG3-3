#include "Circle.h"
#include "Rectangle.h"

int main() {
	Circle* circle = new Circle();
	Rectangle* rectangle = new Rectangle();

	circle->size();
	circle->draw();

	rectangle->size();
	rectangle->draw();
	
	return 0;
}