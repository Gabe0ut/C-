#include "agenda.h"
#include <iostream>

using namespace std;

Agenda::Agenda(){
}; //função agenda que é membro da classe Agenda

void Agenda::inserir(const string& name, int cod){
    nome = name;
    id = cod;
};

void Agenda::listar(){
    cout << "\n-----------------------------";
    cout << "\n\tContato " << id+1;
    cout << "\n" << nome;
    cout << "\n-----------------------------";
};
