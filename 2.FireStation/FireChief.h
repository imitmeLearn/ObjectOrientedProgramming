#pragma once
#include "Firefighter.h"

class FireChief: public Firefighter
{
public:
	FireChief(const std::string& name): Firefighter(name)
	{}
	//~FireChief: public Firefighter();
	FireChief(const std::string& name,Firefighter* numberOne = nullptr): Firefighter(name),numberOne(numberOne)
	{}

	//불끄기 위임함수
	void TellFirefighterToExtinguishFire(Firefighter* colleague)
	{
		colleague->ExtinguishFire();
	}

	virtual void ExtinguishFire() override
	{
		if(numberOne != nullptr)
		{
			TellFirefighterToExtinguishFire(numberOne);
		}
	}

	const Firefighter* GetNumberOne() const
	{
		return numberOne;
	}
	void SetNumberOne (Firefighter* numberOne)
	{
		this->numberOne = numberOne;
	}

private:
	Firefighter* numberOne = nullptr;
};
