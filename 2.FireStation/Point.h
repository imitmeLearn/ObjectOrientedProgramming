#pragma once
#include <iostream>
class Point
{
public:
	Point(int x= 0,int y=0)
		:x(x),y(y)
	{}

	//연산자 오버로딩
	friend std::ostream& operator<<(std::ostream& os,const Point& point)
	{
		return os <<"(" << point.x <<", "<< point.y <<")" ;
	}
	int GetX() const
	{
		return x;
	}

	int GetY() const
	{
		return y;
	}
private:
	int x;
	int y;
};