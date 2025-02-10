#pragma once
class Ladder
{
public:
	Ladder(float length = 0.f)
		:length(length)
	{}
	//~Ladder();

	float GetLength() const
	{
		return length;
	}
	void SetLength (float length)
	{
		this->length = length;
	}
private:
	float length = 0.f;
};
