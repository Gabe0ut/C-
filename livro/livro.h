//arquivo de cabeçalho (header)

using namespace std;
#include <iostream>

class Livro{
    public:
        livro(char *titulo, char *autor, int edicao);
        void mostra_livro();
    
    private:
        char titulo;
        char autor;
        int edicao;
};

class Disco{
    public: 
        disco(double espaco);
        void mostra_disco();

    private:
        double espaco;
}