#include "Nod_dublu.h"

using namespace std;
ostream& operator <<(ostream& os, Nod_dublu& n)
{
	os << n.GetInfo();
	return os;
}

istream& operator >>(istream& is, Nod_dublu& n) {
	char* z;
	z = new char;
	is >> z;
	n.SetInfo(z);
	delete z;
	return is;
}

Nod_dublu& Nod_dublu::operator = (Nod_dublu& b) {
	this->SetInfo(b.GetInfo());
	this->SetNext(b.GetNext());
	this->SetPrev(b.GetPrev());
	return *this;
}