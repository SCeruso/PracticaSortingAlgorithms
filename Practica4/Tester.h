#pragma once
class Tester
{
private:
	int key_;
	static int comp;
public:
	Tester();
	Tester(int);
	~Tester();
	//int& value();
	int& value();
	int& get_comp();
	bool operator >( Tester&);
	bool operator >= (Tester&);
	bool operator == (Tester&);
	bool operator <= (Tester&);
	bool operator < (Tester&);
	bool operator != (Tester&);
};
