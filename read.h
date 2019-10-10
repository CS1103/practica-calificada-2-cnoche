#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "linkedLists.h"

using namespace std;
template<typename T>

void load_from(const string& file_name, llist<T>& list) { 

    fstream file(file_name, ios::in); 
    
    if (!file.is_open()){
        string fila;
        getline(file, fila);

        while (getline(file,fila)) { 
    
            list.clear(); 
            
            getline(file, fila); 
    
            stringstream s(fila); 
            string numeros;
            while (getline(s, numeros, '\n')) { 
                list.insert(stoi(numeros)); 
        } 
    }
}}