#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include"Triangle.h"
//getArea вычисление площади
//getFrameRect получение ограничивающего прямоугольника для фигуры
// move перемещение центра фигуры, 2 варианта: в конкретную точку и в виде смещений по осям абсцисс и ординат
void print(Shape & figure)
{
	std::cout << "Area: " << figure.getArea() << std::endl;
	std::cout << "Perimetr:" << figure.getPer() << std::endl;
	std::cout << "Frame X: " << figure.getFrameRect().pos.x << " " << "Frame Y: " << figure.getFrameRect().pos.y << std::endl;
	std::cout << "Frame width " << figure.getFrameRect().width << " " << "Frame height " << figure.getFrameRect().height << std::endl;
}

int main()
{
	std::cout << "Creating Rectangle " << std::endl;
	Rectangle r({ 30, 49 }, 5, 10);
	print(r);

	std::cout << "Moving Rectangle by dx=4, dy=9" << std::endl;
	r.move(4, 9);
	print(r);

	std::cout << "Moving Rectangle to point x=33.40, y=15.45" << std::endl;
	r.move({ 33.40, 15.45 });
	print(r);

	std::cout << "Creating Circle " << std::endl;
	Circle c({ 10.0, 14.0 }, 2.0);
	print(c);

	std::cout << "Moving Circle by dx=4, dy=7" << std::endl;
	c.move(4, 7);
	print(c);

	std::cout << "Moving Circle to point x=10.21, y=8.51" << std::endl;
	c.move({ 10.21, 8.51 });
	print(c);

	std::cout << "Creating Triangle " << std::endl;
	Triangle t ({ 30, 49 }, 5,10,5,4);
	print(t);
	std::cout << "Moving Triangle by dx=6, dy=15" << std::endl;
	t.move(6, 15);
	print(t);

	std::cout << "Moving Triangle to point x=65.40, y=56.45" << std::endl;
	t.move({ 65.40, 56.45 });
	print(t);

	return 0;
}