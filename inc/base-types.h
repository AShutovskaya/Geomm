#pragma once
#ifndef BASE_TYPES_HPP
#define BASE_TYPES_HPP

struct point_t
{
	double x;
	double y;
};
struct circle_t 
{
	double radius;


};

struct rectangle_t
{
	point_t pos;
	double width;
	double height;
};
struct triangle_t
{
	point_t pos;
	double a;
	double b;
	double c;
	double radiusO;
};

#endif
