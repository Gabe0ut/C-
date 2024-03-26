#include "agenda.h"
#include <iostream>
#include <string.h>

using namespace std;

main(void){
    int id = 0;
    string nome;

    Agenda agenda1[4];

    while(id != 4){
        cout << "Informe o nome: ";
        cin >> nome;
        agenda1[id].inserir(nome, id);

        id+=1;
    };
    
    id=0;
    while(id != 4){
        agenda1[id].listar();   
        id+=1; 
    };

}