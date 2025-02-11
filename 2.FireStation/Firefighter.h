#pragma once
#include <string>
#include <iostream>
#include "Firetruck.h"

class Firefighter
{
public:
	Firefighter(const std::string& name)
		: name(name)
	{}
	virtual	~Firefighter()=default;

	//불끄기
	virtual	void ExtinguishFire()
	{
		std::cout<<name<<"소방관이 불을 끄고 있어! "<<"\n";
		TrainHoseOnFire();
		TurnOnHose();
	}

	//운전
	void Drive(class Firetruck* truckToDrive,const class Point& position)
	{
		//운전자 확인
		if(truckToDrive->GetDriver() != this)
		{
			std::cout<<name<<" 운전자 다름 "<<"\n";

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

protected:	//확장할 수 있으니 protected? 실제 그 상황이 왔을 때 확장해야지, 현상에서 미리 하는것은, 좋은 것 아니다.
	//호스 켜기(물)
	virtual	void TurnOnHose()
	{
		std::cout<<name<<"소방관! 불이 꺼지고 있습니다. "<<"\n";
	}

	//호스 조준.
	virtual	void TrainHoseOnFire()
	{
		std::cout<<name<<"소방관! 호스를 불이 발생한 곳에 겨냥하고 있습니다."<<"\n";
	}

private:
	std::string name;
};
