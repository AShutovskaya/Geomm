#include <iostream>
#include <cassert>
#include "Triangle.h"
Triangle::Triangle(const point_t & pos, double a, double b, double c,double radiusO) :
	pos_(pos),
	a_(a),
	b_(b),
	c_(c),
	radiusO_(radiusO)
{
	assert(a > 0 && b > 0 && c > 0 && radiusO > 0);
}

double Triangle::getArea() const
{
	return (a_ * b_* c_)/radiusO_;
}
double Triangle::getPer() const
{
	return a_ + b_ + c_;
}
rectangle_t Triangle::getFrameRect() const
{
	return{ pos_, a_, b_ };
}
void Triangle::move(const point_t & pos)
{
	pos_ = pos;
}

void Triangle::move(double dx, double dy)
{
	pos_.x += dx;
	pos_.y += dy;
}