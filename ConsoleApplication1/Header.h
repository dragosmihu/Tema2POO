#ifndef NOD_H
#define	NOD_H
class Nod {
	char* info;
	Nod* next;
public:
	Nod();
	Nod(char*, Nod*);
	~Nod();
	Nod* GetNext();
	char* GetInfo();
};
#endif // !NOD_H

