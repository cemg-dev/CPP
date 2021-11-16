#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int* alocar_vetor(int* vetor, int tamanho) {
    vetor = new int[tamanho];
	return vetor;
}

int* desalocar_vetor(int* vetor) {
	delete vetor;
	return nullptr;
}


int** alocar_matriz(int** matriz, int linhas, int colunas) {
    matriz = new int*[linhas];
	for(int i = 0; i < linhas; i++) {
        matriz[i] = new int[colunas];
	}
	return matriz;
}

int** desalocar_matriz(int** matriz, int linhas) {
	for(int i = 0; i < linhas; i++) {
        delete matriz[i];
	}
	delete matriz;
	return nullptr;
}

int main() {
    // Alocando e desalocando vetor
	int tamanho;
	cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
	
	int* vetor;
	vetor = alocar_vetor(vetor, tamanho);
	
	cout << "Preenchendo Vetor Com Valores:" << endl;
    for(int i = 0; i < tamanho; i++) {
        cout << "Digite um valor: ";
        cin >> vetor[i];
    }
    
    cout << "Vetor:[ ";
    for(int i = 0; i < tamanho; i++) {
        cout << " " << vetor[i];
    }
    cout << "]" << endl;
    
    vetor = desalocar_vetor(vetor);
    if(vetor == nullptr) {
    	cout << "Vetor desalocado com sucesso" << endl;
    } else {
    	cout << "Ocorreu algum erro" << endl;
    }
    
    // Alocando e desalocando matriz
    int linhas;
	cout << "Digite o tamanho das linhas da matriz: ";
    cin >> linhas;
	
	int colunas;
	cout << "Digite o tamanho das colunas da matriz: ";
    cin >> colunas;
	
	int** matriz;
	matriz = alocar_matriz(matriz, linhas, colunas);
	
	cout << "Preenchendo Matriz Com Valores:" << endl;
    for(int i = 0; i < linhas; i++) {
    	for(int j = 0; j < colunas; j++) {
            cout << "Digite um valor para a posição [" << i << "][" << j << "]: ";  
            cin >> matriz[i][j];
    	}
    }
    
    cout << "Matriz:" << endl;
    for(int i = 0; i < linhas; i++) {
    	cout << "|";
    	for(int j = 0; j < colunas; j++) {
            cout << " " << matriz[i][j];
    	}
    	cout << " |" << endl;
    }
    
    matriz = desalocar_matriz(matriz, linhas);
    if(matriz == nullptr) {
    	cout << "Matriz desalocada com sucesso" << endl;
    } else {
    	cout << "Ocorreu algum erro" << endl;
    }

    return 0;
}

