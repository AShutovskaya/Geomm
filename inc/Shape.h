#pragma once
#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "base-types.h"
//создание базового класса для наследования
class Shape
{
public:
	virtual ~Shape() = default;
	virtual double getArea() const = 0;//функция нахождения площади
	virtual double getPer() const = 0;//функция нахождения периметра
	virtual rectangle_t getFrameRect() const = 0;//функция получения
	//ограничивающего прямоугольника для фигуры
	virtual void move(const point_t & pos) = 0;//функция смещения фигуры в конкретуню точку
	virtual void move(double dx, double dy) = 0;//функция смещения по оси абсцисс и ординат
};

#endif // SHAPE_HPP
