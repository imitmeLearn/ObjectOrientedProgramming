#pragma once
#include <iostream>
#include "Point.h"
#include "Ladder.h"
#include "Hose.h"

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
	{
		return driver;
	}

	void SetDriver(class Firefighter* driver)
	{
		this -> driver = driver;
	}

private:
	class	Firefighter* driver = nullptr; //전방선언 순환참조	//Firefighter* driver = nullptr; //전방선언 순환참조
	Ladder* ladder = nullptr;
	Hose* hose = nullptr;
};

#pragma region Q1
//#pragma once
//#include <iostream>
//#include "Point.h"
//#include "Ladder.h"
//#include "Hose.h"
//
//#include "Firefighter.h"//전방선언 순환참조 //https://hobbylife.tistory.com/entry/%ED%97%A4%EB%8D%94%ED%8C%8C%EC%9D%BC-%EC%88%9C%ED%99%98%EC%B0%B8%EC%A1%B0-%EC%97%90%EB%9F%AC%EB%A9%94%EC%84%B8%EC%A7%80%EC%99%80-%ED%95%B4%EA%B2%B0%EB%B0%A9%EB%B2%95Include-Guard%EC%99%80-%EC%A0%84%EB%B0%A9-%EC%84%A0%EC%96%B8
//
//class Firetruck
//{
//public:
//	Firetruck()
//	{
//		ladder = new Ladder(10.f);
//	}
//	~Firetruck()
//	{
//		delete ladder;	//생성주기 직접 관리
//	}
//
//	//이동
//	void Drive(const Point& position)
//	{
//		if(driver == nullptr)
//		{
//			return;
//		}
//		std::cout<<position<<"위치로 소방차 이동 중 \n";
//	}
//	const Ladder* GetLadder() const
//	{
//		return ladder;
//	}
//	const Hose* GetHose() const
//	{
//		return hose;
//	}
//	void SetHose(Hose* hose)
//	{
//		this->hose = hose;
//	}
//
//	//class Firefighter* GetDriver() const
//	Firefighter* GetDriver() const
//	{
//		return driver;
//	}
//
//	//void SetDriver(class Firefighter* driver)
//	void SetDriver(Firefighter* driver)
//	{
//		this -> driver = driver;
//	}
//
//private:
//	Firefighter driver2;// = nullptr; //전방선언 순환참조
//	Firefighter* driver = nullptr; //전방선언 순환참조
//	//class	Firefighter* driver = nullptr; //전방선언 순환참조	//Firefighter* driver = nullptr; //전방선언 순환참조
//	Ladder* ladder = nullptr;
//	Hose* hose = nullptr;
//};

#pragma endregion
