#pragma once
#include <string>
#include <iostream>
#include "Firetruck.h"

class Firefighter
{
public:
	Firefighter(const std::string& name)
		:name (name)
	{}
	~Firefighter()=default;

	//불끄기
	void ExtinguishFire()
	{
		std::cout<<name<<"소방관이 불을 끄고 있어! "<<"\n";
	}

	//운전
	void Drive(class Firetruck* truckToDrive,const class Point& position)
	{
		//운전자 확인
		if(truckToDrive->GetDriver() != this)
		{
			return;
		}

		truckToDrive->Drive(position);
	}

	const std::string GetName() const
	{
		return name;
	}

	void SetName(const std::string& name)
	{
		this->name =name;
	}

private:
	std::string name;
};
