#include <fstream>
#include "Coada_prioritati.h"
#include <string.h>
using namespace std;
ifstream fin("input.in");
int main()
{
    char str[100], *p;
    string s;
    Coada_prioritati c;
    fin >> c;
    cout << c << '\n';
    try {
        fin.ignore();
        while (getline(fin, s)) {
                strcpy(str, s.c_str());
                cout << str << '\n';
                p = strtok(str, " ");
                if (strcmp(p, "insert") != 0 && strcmp(p, "top") != 0 && strcmp(p, "pop") != 0 && strcmp(p, "empty") != 0) throw 1;
                if (p[0] == 'i') {
                    p = strtok(NULL, " ");
                    if (p == NULL) throw 2.3;
                    if (strlen(p) > 19) throw 1.6f;
                    char* x = new char[20];
                    strcpy(x, p);
                    p = strtok(NULL, " ");
                    if (p == NULL) throw 2.3;
                    c.insert(x, atoi(p));
                }
                else if (p[0] == 't') {
                    if (c.GetNrEl() == 0) throw 'x';
                    cout << c.top() << '\n';
                }
                else if (p[0] == 'p') {
                    if (c.GetNrEl() == 0) throw 'x';
                    c.pop();
                }
                else c.empty();
                cout << '\n' << c << '\n';
        }
    }
    catch(int i) {
        cout << "comanda inexistenta" << '\n';
    }
    catch (float f) {
        cout << "input prea lung la comanda insert" << "\n";
    }
    catch (double d) {
        cout << "prea putine argumente" << '\n';
    }
    catch (char c) {
        cout << "Coada este goala" << '\n';
    }
    return 0;
}

