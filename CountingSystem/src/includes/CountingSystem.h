#pragma once
#include <vector>
#include <string>


//template<int order>
class CountingSystem
{
	std::vector<int> myValue;
	
	int order;

public:
	std::string ToString() const;
	
	int GetOrder() const { return order; } 

	CountingSystem(unsigned int inOrder);
	
	CountingSystem(unsigned int inOrder, int inTenCS);

	CountingSystem(const CountingSystem& inCS);
	
	void operator=(const CountingSystem& inCS);

	CountingSystem GetNewOrder(unsigned int inOrder);

	void ChangeOrder(unsigned int inOrder);

	void NormalizeSelf();

	static void Normalize(CountingSystem& inCS);

	int operator[] (int inIndex) const { return myValue[inIndex]; }

	int GetSize() const;

	CountingSystem operator+ (const CountingSystem& inCS);

	void operator+=(const CountingSystem& inCS);

	void operator+=(int inInt);

	CountingSystem operator* (const CountingSystem& inCS);

	void operator*=(const CountingSystem& inCS);

	void operator*=(int inInt);

	CountingSystem operator- (const CountingSystem& inCS);

	void operator-=(const CountingSystem& inCS);

	void operator-=(int inInt);

	CountingSystem operator/ (const CountingSystem& inCS);

	void operator/=(const CountingSystem& inCS);

	void operator/=(int inInt);

	bool operator>(const CountingSystem& inCSFirst);

	bool operator<(const CountingSystem& inCSFirst);

	bool operator>=(const CountingSystem& inCSFirst);

	bool operator<=(const CountingSystem& inCSFirst);

	bool operator==(const CountingSystem& inCSFirst);

	bool operator!=(const CountingSystem& inCSFirst);

	friend int main();

private:

	void ValueShiftSelf(unsigned int inShift);

	static void ValueShift(unsigned int inShift, CountingSystem& inCS);

	void BreakZeroEnd();
};