#include <iostream>

#include "linkedLists.h"
#include "read.h"

using namespace std;

int main()
{
 
    llist<int> h;
    load_from("data.txt", h);
    cout << "Lista" << endl;
    cout << h;
    h.insert(10);
    h.insert(20);
    h.insert(40);
    h.insert(50);
    h.insert(10);
    cout << "heap" << endl;
    cout << h;
    cout << "heap" << endl;
    cout << h;
    cin >> h;
    cout << "heap" << endl;
    cout << h;
    h.insert(h, 100, 200);
    cout << "heap" << endl;
    cout << h;
    load_from("data.txt", h);
    cout << h;
    return 0;
}