#include <iostream>

using namespace std;

main(void){
    int opc=-1;

    while (opc!=0){
        cout << "\tMenu principal\n";
        cout << "Escolha uma opção abaixo: \n";
        cout << "1 - Novo cadastro\n 2 - Pesquisar\n 3 - Alterar\n 4 - Excluir\n 5 - Listar\n\n 0 - Sair";
        cin >> opc;
        system("cls");
    }
}