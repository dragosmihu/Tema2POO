#pragma once
#ifndef NOD_PRIORITATE_H
#define NOD_PRIORITATE_H
#include "Nod_dublu.h"
class Nod_prioritate : public Nod_dublu {
	int prio;
public:
	Nod_prioritate() : Nod_dublu(), prio() {}
	Nod_prioritate(Nod* next, char* info, Nod* prev, int x) :Nod_dublu(next, info, prev), prio(x) {}
	Nod_prioritate(Nod_prioritate& n) { *this = n; }
	virtual ~Nod_prioritate() { prio = 0; }
	const int GetPrio() { return prio; }
	void SetPrio(int x) { prio = x; }
	friend ostream& operator <<(ostream&, const Nod_prioritate&);
	friend istream& operator >>(istream&, Nod_prioritate&);
	Nod_prioritate& operator =( Nod_prioritate&);
 };
#endif // !NOD_PRIORITATE_H
