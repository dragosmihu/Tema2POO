#include "Coada_prioritati.h"
#include "Nod_prioritate.h"
using namespace std;
ostream& operator <<(ostream& os, Coada_prioritati& n)
{
	Nod_prioritate*nod = n.front;
	for (int i = 0; i < n.nr_el; i++) {
		os << nod->GetInfo() << " ";
		nod = dynamic_cast<Nod_prioritate*>(nod->GetNext());
	}
	return os;
}

istream& operator >>(istream& is, Coada_prioritati& n) {
	is >> n.nr_el;
	char* el;
	int pr;
	for (int i = 0; i < n.nr_el; i++) {
		el = new char[20];
		is >> el >> pr;
		n.insert(el, pr);
		n.nr_el--;
	}
	return is;
}

Coada_prioritati& Coada_prioritati::operator = (Coada_prioritati& b) {
	*front = *(b.front);
	nr_el = b.nr_el;
	return *this;
}

void Coada_prioritati::insert(char* str, int pr) {
	nr_el++;
	Nod_prioritate* temp = new Nod_prioritate;
	Nod_prioritate* nod = front;
	temp->SetInfo(str);
	temp->SetPrio(pr);
	if (front == nullptr || pr >= front->GetPrio()) {
		temp->SetNext(front);
		if (front != nullptr)
			front->SetPrev(temp);
		front = temp;
	}
	else {
		while (nod->GetNext() != nullptr && nod->GetPrio() > pr)
			nod = dynamic_cast<Nod_prioritate*>(nod->GetNext());
		if (nod->GetNext() == nullptr && nod->GetPrio() > pr) {
			nod->SetNext(temp);
			temp->SetPrev(nod);
		}
		else {
			temp->SetPrev(nod->GetPrev());
			nod->GetPrev()->SetNext(temp);
			nod->SetPrev(temp);
			temp->SetNext(nod);
		}
	}
}

char* Coada_prioritati::top() {
	return front->GetInfo();
}

void Coada_prioritati::pop() {
	nr_el--;
	Nod_prioritate* temp = front;
	front = dynamic_cast<Nod_prioritate*>(front->GetNext());
	if (front != nullptr)
		front->SetPrev(nullptr);
	delete temp;
}

void Coada_prioritati::empty() {
	while (front != nullptr) {
		pop();
	}
}

Coada_prioritati::~Coada_prioritati() {
	empty();
}

int Coada_prioritati::GetNrEl() {
	return nr_el;
}