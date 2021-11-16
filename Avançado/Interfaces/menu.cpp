#include <iostream>
#include "soma.hpp" // note que importamos o arquivo de cabeçalho e não o que implementa;
/*
* Detalhes:
*   . A importação de soma.cpp ao envés de soma.hpp funcionaria, mas não utilizaria o arquivo .hpp que esconde nossa implementação;
*   . Para que o uso de interfaces faça sentido devemos compilar os arquivos da forma correta:
*       . g++ -c soma.cpp , criará um arquivo chamado soma.o;
*       . g++ -c menu.cpp , criará um arquivo chamado menu.o;
*       . g++ soma.o menu.o -o executavel , criará um arquivo chamado executavel a partir dos arquivos compilados soma.o e menu.o;
*/

using std::cout;
using std::endl;

int main() {
    int n1 = 10, n2 = 10, resultado;
    resultado = soma(n1, n2);
    
    cout << "Resultado: " << resultado << endl;   
    
    return 0; 
}

