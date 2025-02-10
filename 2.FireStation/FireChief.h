#pragma once
#include "Firefighter.h"

class FireChief: public Firefighter
{
public:
	FireChief(const std::string& name): Firefighter(name)
	{}
	//~FireChief: public Firefighter();

	//불끄기 위임함수
	void TellFirefighterToExtinguishFire(Firefighter* colleague)
	{
		colleague->ExtinguishFire();
	}
};
