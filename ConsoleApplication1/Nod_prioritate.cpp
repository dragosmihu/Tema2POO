#include "Nod_prioritate.h"
using namespace std;
ostream& operator <<(ostream& os, Nod_prioritate& n)
{
	os << n.GetInfo();
	return os;
}

istream& operator >>(istream& is, Nod_prioritate& n) {
	char* z;
	z = new char[20];
	int x;
	is >> z >> x;
	n.SetInfo(z);
	n.SetPrio(x);
	delete[] z;
	return is;
}

Nod_prioritate& Nod_prioritate::operator = (Nod_prioritate& b) {
	this->SetInfo(b.GetInfo());
	this->SetNext(b.GetNext());
	this->SetPrev(b.GetPrev());
	this->SetPrio(b.GetPrio());
	return *this;
}
