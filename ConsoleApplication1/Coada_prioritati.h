#pragma once
#ifndef COADA_PRIORITATI_H
#define COADA_PRIORITATI_H
#include "Nod_prioritate.h"
class Coada_prioritati {
	Nod_prioritate* front;
	int nr_el;
public:
	Coada_prioritati() : front(nullptr), nr_el() {}
	Coada_prioritati(Nod_prioritate* x, Nod_prioritate* y, int nr) :front(x), nr_el(nr) {}
	Coada_prioritati(Coada_prioritati& c) { *this = c; }
	~Coada_prioritati();
	friend ostream& operator <<(ostream&, Coada_prioritati&);
	friend istream& operator >>(istream&, Coada_prioritati&);
	Coada_prioritati& operator =(Coada_prioritati&);
	void insert(char*, int);
	char* top();
	void pop();
	void empty();
	int GetNrEl();
};
#endif // !COADA_PRIORITATI_H

