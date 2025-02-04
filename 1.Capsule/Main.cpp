#include <iostream>

class Rectangle
{
public:
	//	Rectangle() = default;
	Rectangle(float x, float y)
		:x(x), y(y)
	{
	}
	float	GetArea()
	{
		return x * y;
	}
	float		GetSize()
	{
		return 2 * (x + y);
	}
private:
	float x;
	float y;
};

class Circle
{
public:
	//	Circle() = default;
	Circle(float r)
		:r(r)
	{
	}
	float GetArea()
	{
		return r * r * 3.14f;
	}
	float GetSize()
	{
		return 2 * 3.14f * r;
	}
private:
	float r;
	//const float PI = 3.141592f;
};

class Time
{
public:
	/*Time(int h)
		:h(h)
	{
	}
	Time(int h, int m)
		:h(h), m(m)
	{
	}*/
	Time(int h, int m = 0, int s = 0)
		:h(h), m(m), s(s)
	{
	}

	void ShowTime()
	{
		std::cout << "[" << h << "시 " << m << "분 " << s << "초" << "]" << "\n";
	}
	void ShowTimeInSeconds()
	{
		std::cout << "  " << s + m * 60 + h * 60 * 60 << "초" << " " << "\n";
	}
private:
	int h;
	int m;
	int s;
};

class NameCard
{
public:
	//NameCard(std::string name, std::string phone, std::string address, std::string position)
	//	:name(name), phone(phone), address(address), position(position) //복사
	//{
	//}
	NameCard(const std::string& name
		, const std::string& phone
		, const std::string& address
		, const std::string& position)
		:name(name), phone(phone), address(address), position(position) //참조로 전달
	{
	}
	void	ShowData()
	{
		std::cout << "이    름 : " << name << "\n";
		std::cout << "전화번호 : " << phone << "\n";
		std::cout << "주    소 : " << address << "\n";
		std::cout << "직    급 : " << position << "\n";
	}
private:

	std::string name;
	std::string phone;
	std::string address;
	std::string position;
};

int main()
{
	std::cout << "<문제3>" << "\n";

	// NameCard(이름, 전화번호, 주소, 직급);
	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "서울시...", "Freelancer");
	jang.ShowData();

	/// 실행 결과
	//이    름 : Jang Se Yun
	//	전화번호 : 010 - 1111 - 1111
	//	주    소 : 서울시...
	//	직    급 : Freelancer

	std::cout << "\n" << "<문제2>" << "\n";

	Time time1 = Time(10);            // 10시 0분 0초.
	Time time2 = Time(10, 20);        // 10시 20분 0초.
	Time time3 = Time(10, 20, 30);    // 10시 20분 30초.

	time2.ShowTime();
	time2.ShowTimeInSeconds();
	time3.ShowTimeInSeconds();

	/// 출력 결과.
	//[10시 20분 0초]
	//	37200초

	std::cout << "\n" << "<문제1>" << "\n";

	Rectangle rectangle = Rectangle(3.f, 4.f);    // 가로, 세로 길이 전달.
	std::cout << "면적: " << rectangle.GetArea() << "\n";
	std::cout << "둘레: " << rectangle.GetSize() << "\n";

	Circle circle = Circle(5.f);                 // 원의 반지름 전달.
	std::cout << "면적: " << circle.GetArea() << "\n";
	std::cout << "둘레: " << circle.GetSize() << "\n";

	///// 출력 결과.
	//면적: 12
	//둘레 : 14
	//면적 : 78.5
	//둘레 : 31.4
}