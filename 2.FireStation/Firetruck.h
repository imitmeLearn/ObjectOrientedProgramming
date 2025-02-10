#pragma once
#include <iostream>
#include "Point.h"

class Firetruck
{
public:
	//Firetruck();
	//~Firetruck();

	//이동
	void Drive(const Point& position)
	{
		if(driver == nullptr)
		{
			return;
		}
		std::cout<<position<<"위치로 소방차 이동 중 \n";
	}

	class Firefighter* GetDriver() const
	{
		return driver;
	}

	void SetDriver(class Firefighter* driver)
	{
		this -> driver = driver;
	}

private:
	class Firefighter* driver = nullptr;
};
