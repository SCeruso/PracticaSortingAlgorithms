#include "Tester.h"


Tester::Tester() : key_(0){}

Tester::Tester(int k) : key_(k) {}

Tester::~Tester()  {}

int&  Tester::value() { return key_; }

int& Tester::get_comp() { return comp; }

bool Tester::operator >( Tester& t) {
	comp++;
	return key_ > t.value() ? true : false;
}

bool Tester::operator >=(Tester& t) {
	comp++;
	return key_ >= t.value() ? true : false;
}

bool Tester::operator <(Tester& t) {
	comp++;
	return key_ < t.value() ? true : false;
}

bool Tester::operator <=(Tester& t) {
	comp++;
	return key_ <= t.value() ? true : false;
}

bool Tester::operator ==(Tester& t) {
	comp++;
	return key_ == t.value() ? true : false;
}

bool Tester::operator !=(Tester& t) {
	comp++;
	return key_ != t.value() ? true : false;
}