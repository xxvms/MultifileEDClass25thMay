#pragma once

class Part
{
protected:
	int i;
	char s;
public:
	void setData(int j);
	int getData();
};

class Arith : public Part
{
protected:
	int j;

public:
	int Square(int j);
	
};