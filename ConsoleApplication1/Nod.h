#pragma once
#ifndef NOD_H
#define	NOD_H
#include<iostream>
#include<string>
using namespace std;
class Nod {
	char* info;
	Nod* next;
public:
	Nod() : info(nullptr), next(nullptr) {}
	Nod(char* x, Nod* y) : info(x), next(y) {}
	Nod(Nod& n) : info(n.info), next(n.next) {}
	virtual ~Nod() { info = nullptr; next = nullptr; }
    Nod* GetNext() { return next; }
	char* GetInfo() { return info; }
	void SetInfo(char* x) { info = x; }
	void SetNext(Nod* x) { next = x; }
	friend ostream& operator <<(ostream&, const Nod );
	friend istream& operator >>(istream&, Nod);
	virtual Nod& operator =(const Nod&);
};
#endif // !NOD_H

