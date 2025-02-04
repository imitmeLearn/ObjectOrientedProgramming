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
		std::cout << "[" << h << "�� " << m << "�� " << s << "��" << "]" << "\n";
	}
	void ShowTimeInSeconds()
	{
		std::cout << "  " << s + m * 60 + h * 60 * 60 << "��" << " " << "\n";
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
	//	:name(name), phone(phone), address(address), position(position) //����
	//{
	//}
	NameCard(const std::string& name
		, const std::string& phone
		, const std::string& address
		, const std::string& position)
		:name(name), phone(phone), address(address), position(position) //������ ����
	{
	}
	void	ShowData()
	{
		std::cout << "��    �� : " << name << "\n";
		std::cout << "��ȭ��ȣ : " << phone << "\n";
		std::cout << "��    �� : " << address << "\n";
		std::cout << "��    �� : " << position << "\n";
	}
private:

	std::string name;
	std::string phone;
	std::string address;
	std::string position;
};

int main()
{
	std::cout << "<����3>" << "\n";

	// NameCard(�̸�, ��ȭ��ȣ, �ּ�, ����);
	NameCard jang = NameCard("Jang Se Yun", "010-1111-1111", "�����...", "Freelancer");
	jang.ShowData();

	/// ���� ���
	//��    �� : Jang Se Yun
	//	��ȭ��ȣ : 010 - 1111 - 1111
	//	��    �� : �����...
	//	��    �� : Freelancer

	std::cout << "\n" << "<����2>" << "\n";

	Time time1 = Time(10);            // 10�� 0�� 0��.
	Time time2 = Time(10, 20);        // 10�� 20�� 0��.
	Time time3 = Time(10, 20, 30);    // 10�� 20�� 30��.

	time2.ShowTime();
	time2.ShowTimeInSeconds();
	time3.ShowTimeInSeconds();

	/// ��� ���.
	//[10�� 20�� 0��]
	//	37200��

	std::cout << "\n" << "<����1>" << "\n";

	Rectangle rectangle = Rectangle(3.f, 4.f);    // ����, ���� ���� ����.
	std::cout << "����: " << rectangle.GetArea() << "\n";
	std::cout << "�ѷ�: " << rectangle.GetSize() << "\n";

	Circle circle = Circle(5.f);                 // ���� ������ ����.
	std::cout << "����: " << circle.GetArea() << "\n";
	std::cout << "�ѷ�: " << circle.GetSize() << "\n";

	///// ��� ���.
	//����: 12
	//�ѷ� : 14
	//���� : 78.5
	//�ѷ� : 31.4
}