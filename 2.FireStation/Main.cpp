#include "Firefighter.h"

int main()
{
	Firetruck* truckOne = new Firetruck();
	Firefighter* ronnie = new Firefighter("로니");
	Firefighter* james = new Firefighter("제임스");

	truckOne->SetDriver(ronnie);
	truckOne->Drive(Point(10,5));

	truckOne->SetDriver(james);
	truckOne->Drive(Point(20,-3));

	std::cin.get();
}