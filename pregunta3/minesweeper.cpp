/* 
 * File:   main.cpp
 * Author: Alejandro
 *
 * Created on 24 de mayo de 2012, 19:25
 */
//(0<n,m<=100)
#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

void imprimeCampo(char matriz[], int lineas, int columnas,int campo) {
    cout<<"Field #"<<campo<<":"<<endl;
    int pesos[lineas][columnas];

    //Inicializa las distancias a las minas a ceros
    for (int i = 0; i < lineas; i++)
        for (int j = 0; j < columnas; j++)
            pesos[i][j] = 0;

    for (int k = 0; k < lineas; k++) {
        for (int l = 0; l < columnas; l++) {

            if (matriz[(k * columnas) + l] == '*') pesos[k][l] = -1;
            else {
                for (int adyX = -1; adyX <= 1; adyX++) {
                    for (int adyY = -1; adyY <= 1; adyY++) {
                        if (adyX + k < 0 || adyY + l < 0 || adyX + k == lineas || adyY + l == columnas);
                        else if (adyX == 0 && adyY == 0);
                        else if ('*' == matriz[((adyX + k) * columnas) + adyY + l]) { //
                            pesos[k][l]++;
                        }
                    }

                }
            }
        }

        cout << endl;
    }
    for (int k = 0; k < lineas; k++) {
        for (int l = 0; l < columnas; l++)
            if (pesos[k][l] == -1)
                cout << "*" << " ";
            else
                cout << pesos[k][l] << " ";
        cout << endl;
    }

}

int main(int argc, char** argv) {

    int lineas = 0;
    int columnas = 0;
    int campos = 0;

    cout << "Ingresa el número de campos" << endl;
    cout << "Captura el número de líneas y columnas separadas por un espacio" << endl;
    cout << "Coloca los espacios de cada línea con un . y las minas con un *." << endl;
    cout << "Escribe una línea con \"0 0\" para terminar" << endl;
    cin >> campos;
    cin >> lineas;
    cin >> columnas;
    //   cout << lineas << " " << columnas << endl;
    char matriz[lineas][columnas];
    int pesos[lineas][columnas];

    //Inicializa las distancias a las minas a ceros
    for (int i = 0; i < lineas; i++)
        for (int j = 0; j < columnas; j++)
            pesos[i][j] = 0;



    for (int i = 0; i < lineas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> matriz[i][j];


    imprimeCampo(*matriz, lineas, columnas,campos);
    return 0;
}

