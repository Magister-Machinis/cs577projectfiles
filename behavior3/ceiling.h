#pragma once
class ceiling
{
private:
	int data;
public:
	void init()
	{
		this->data = __INT_MAX__;
	}
	int get()
	{
		return this->data;
	}
	void set(int num)
	{
		this->data = num;
	}
};

