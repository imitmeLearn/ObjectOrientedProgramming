#pragma once
#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

//#include "Firefighter.h"//전방선언 순환참조

class Firetruck
{
public:
	Firetruck()
	{
		ladder = new Ladder(10.f);
	}
	~Firetruck()
	{
		delete ladder;	//생성주기 직접 관리
	}

	//이동
	void Drive(const Point& position)
	{
		if(driver == nullptr)
		{
			return;
		}
		std::cout<<position<<"위치로 소방차 이동 중 \n";
	}
	const Ladder* GetLadder() const
	{
		return ladder;
	}
	const Hose* GetHose() const
	{
		return hose;
	}
	void SetHose(Hose* hose)
	{
		this->hose = hose;
	}

	class Firefighter* GetDriver() const
		//Firefighter* GetDriver() const
	{
		return driver;
	}

	void SetDriver(class Firefighter* driver)
		//void SetDriver(Firefighter* driver)
	{
		this -> driver = driver;
	}

private:
	class	Firefighter* driver = nullptr; //전방선언 순환참조	//Firefighter* driver = nullptr; //전방선언 순환참조
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};
