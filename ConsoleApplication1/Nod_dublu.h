#pragma once
#ifndef NOD_DUBLU_H
#define NOD_DUBLU_H
#include "Nod.h"
class Nod_dublu: public Nod
{
	Nod* ante;
public:
	Nod_dublu() :Nod(), ante(nullptr) {}
	Nod_dublu(Nod* next, char* info, Nod* x) :Nod(info, next), ante(x) {}
	Nod_dublu(Nod_dublu& n) { *this = n; }
	virtual ~Nod_dublu() { ante = nullptr; }
	Nod* GetPrev() { return ante; }
	void SetPrev(Nod* n) { ante = n; }
	friend ostream& operator <<(ostream&, Nod_dublu&);
	friend istream& operator >>(istream&, Nod_dublu&);
	Nod_dublu& operator =( Nod_dublu&);
};

#endif // !NOD_DUBLU_H


