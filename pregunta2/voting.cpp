/* 
 * File:   main.cpp
 * Author: Alejandro
 *
 * Created on 24 de mayo de 2012, 19:24
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */

struct candidato {
    int numero;
    string nombre;
    int votos;

};

int main(int argc, char** argv) {
    int casos;
    int num_candidatos;
    int votantes;
    int numero;
    cout << "Numero de casos" << endl;
    cout << "Numero de candidatos" << endl;
    cin >> casos;
    cin >> num_candidatos;
    char candidatos[num_candidatos][80];
    int votaciones[num_candidatos][1000];
    candidato asoc_candidato[num_candidatos];
    
    cout.clear();
    cin.clear();
    for (int i = 0; i < num_candidatos; i++)
    {
        cout << "i="<<i<<endl;
        cin.getline(candidatos[i], 80);
        asoc_candidato[i].numero=i+1;
        asoc_candidato[i].nombre=string(candidatos[i]);
        asoc_candidato[i].votos=0;
    }
    cout << "---" << endl;
    cout << sizeof(candidatos)<<endl;
    cout<<candidatos[0]<<endl;
    cout<<candidatos[1]<<endl;
    int j = 0;
    //while (cin >> numero) {
    //    for (int i = 0; i < num_candidatos; i++) {
    //        votaciones[j][i] = numero;
    //        //cin>>votaciones[j][i];
    //        j++;
    //    }
    //}


    return 0;
}

