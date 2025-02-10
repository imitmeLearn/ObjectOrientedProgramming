#include "Firefighter.h"

int main()
{
	Firetruck* truckOne = new Firetruck();
	Firefighter* ronnie = new Firefighter("로니");
	Firefighter* james = new Firefighter("제임스");

	truckOne->SetDriver(ronnie);

	james->Drive(truckOne,Point(20,-3)); //운전자가 달라서 pass 되는 부분
	ronnie->Drive(truckOne,Point(10,5));

	truckOne->SetDriver(james);

	james->Drive(truckOne,Point(20,-3));

	std::cin.get();
}