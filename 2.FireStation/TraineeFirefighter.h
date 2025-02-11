#pragma once

#include "Firefighter.h"

class TraineeFirefighter: public Firefighter
{
public:
	~TraineeFirefighter()=default;
	TraineeFirefighter()=default;
	TraineeFirefighter(const std::string& name,bool hoseTrainedOnFire =false)
		:Firefighter(name),hoseTrainedOnFire(hoseTrainedOnFire)
	{}

protected:
	virtual	void TurnOnHose() override
	{
		if(hoseTrainedOnFire)
		{
			std::cout<< "불 꺼지고 있습니다."<<"\n";	//이게 나와야 해
		} else
		{
			std::cout<< "물 엉뚱"<<"\n";
		}
	}

	//호스 조준.
	virtual	void TrainHoseOnFire() override
	{
		hoseTrainedOnFire =true;

		std::cout<<"호스 불 겨냥"<<"\n";
	}
private:
	bool hoseTrainedOnFire =false;
};
