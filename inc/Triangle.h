#pragma once
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle(const point_t & pos, double a, double b, double c,double radiusO);
	double getArea() const override;
	double getPer() const override;
	rectangle_t getFrameRect() const override;
	void move(const point_t & pos) override;
	void move(double dx, double dy) override;

private:
	point_t pos_;
	double a_;
	double b_;
	double c_;
	double radiusO_;
};

#endif //TRIAGLE_HPP

