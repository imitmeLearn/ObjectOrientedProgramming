#include "Firefighter.h"
#include "FireChief.h"

int main()
{
	Firetruck* truckOne = new Firetruck();
	Firefighter* ronnie = new Firefighter("로니");
	Firefighter* james = new Firefighter("제임스");

	FireChief* harry = new FireChief("해리",ronnie);
	truckOne->SetDriver(harry);
	harry->Drive(truckOne,Point(200,300));

	harry->ExtinguishFire();	//harry->TellFirefighterToExtinguishFire(ronnie);	//해리가 불 안끄고, 로니가 끔.위임받았기에

	//다형성
	Firefighter* stillHarry = harry;
	stillHarry -> ExtinguishFire();

	truckOne->SetDriver(ronnie);

	james->Drive(truckOne,Point(20,-3)); //운전자가 달라서 pass 되는 부분
	ronnie->Drive(truckOne,Point(10,5));

	truckOne->SetDriver(james);

	james->Drive(truckOne,Point(20,-3));

	std::cin.get();
}