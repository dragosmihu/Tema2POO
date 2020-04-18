#include "Nod.h"
using namespace std;
ostream& operator <<(ostream& os, const Nod n)
{
	os << n.info;
	return os;
}

istream& operator >>(istream& is, Nod n) {
	is >> n.info;
	return is;
}

Nod& Nod::operator = (const Nod& b) {
	*info = *(b.info);
	*next = *(b.next);
	return *this;
}