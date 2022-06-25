#include <iostream>
#include "Circle.h"
#include"Rectangle.h"
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

	std::cout << "Moving Rectangle by " << std::endl;
	r.move(4, 9);
	print(r);

	std::cout << "Moving Rectangle to point x, y" << std::endl;
	r.move({ 33.40, 15.45 });
	print(r);

	std::cout << "Creating Circle " << std::endl;
	Circle c({ 10.0, 14.0 }, 2.0);
	print(c);

	std::cout << "Moving Circle by " << std::endl;
	c.move(4, 7);
	print(c);

	std::cout << "Moving Circle to point " << std::endl;
	c.move({ 10.21, 8.51 });
	print(c);
	return 0;

	
}