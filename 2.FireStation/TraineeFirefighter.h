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
			Firefighter::TurnOnHose();
		} else
		{
			std::cout<< "물 엉뚱"<<"\n";
		}
	}

	//호스 조준.
	virtual	void TrainHoseOnFire() override
	{
		hoseTrainedOnFire =true;

		Firefighter::TrainHoseOnFire();
	}
private:
	bool hoseTrainedOnFire =false;
};
