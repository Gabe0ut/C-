//arquivo de cabeçalho (header)
using namespace std;
#include <iostream>

class Agenda{
    //membros privados
    private:
        string nome; //membros de dados
        int id = 0;
    
    public:
        Agenda(); //construtor - inicializa os membros de dados
        void inserir(const string& nome, int id);
        void listar();
};