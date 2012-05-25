/* 
 * File:   main.cpp
 * Author: Alejandro
 *
 * Created on 24 de mayo de 2012, 19:24
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

string RAM[1000];
string registro[10];


void ejecutaInstruccion(string inst,int num_inst){
    int segundo_num=((int)inst.at(1)-48);
    int tercer_num=(int)inst.at(2)-48;
    char buffer[4];
    if(inst == "100") 
        ;
    if(inst.at(0)=='2')
        registro[segundo_num] = tercer_num;
    if(inst.at(0)=='3')
        ;//registro[segundo_num] = itoa((atoi(registro[segundo_num].c_str()) + tercer_num) % 1000,buffer,10);
    if(inst.at(0)=='4')
        ;//registro[segundo_num] = itoa((atoi(registro[segundo_num].c_str()) * tercer_num) % 1000,buffer,10);
    if(inst.at(0)=='5')
        registro[segundo_num] = registro[tercer_num];
    if(inst.at(0)=='6')
        ;//registro[segundo_num] = itoa((atoi(registro[segundo_num].c_str()) + atoi(registro[tercer_num].c_str()))%1000,buffer,10);
    if(inst.at(0)=='7')
        ;//registro[segundo_num] = itoa((atoi(registro[segundo_num].c_str()) * atoi(registro[tercer_num].c_str()))%1000,buffer,10);
    if(inst.at(0)=='8')
        registro[segundo_num] = RAM[num_inst];
    if(inst.at(0)=='9')
        RAM[num_inst]=registro[segundo_num];
    if(inst.at(0)=='0')
        ;
    
}
/*
 * 
 */
int main(int argc, char** argv) {
    int casos = 0;
    int caso=0;
    int num_inst=0;
    int inst_caso=0;
    string entrada;
    string salida;
    int primer_enter = 0;
    

    for (int i = 0; i < 1000; i++) RAM[i] = "000";
    for (int j = 0; j < 10; j++) registro[j] = "000";

    cout << "Ingresa el número de casos seguidos de una línea en blanco" << endl;
    cout << "Da las instrucciones línea a línea" << endl;
    cout << "Separa las instrucciones para cada caso con una línea en blanco" << endl;
    cin >> casos;
    cout<<endl;
    int instrucciones[casos];
    for (int i;i<casos;i++) 
        instrucciones[i]=0;
    
    while (getline(cin, entrada)) {
        if (entrada == "\0") {
             instrucciones[caso]++;//halt
            if(primer_enter == 1) 
                caso++;
            inst_caso=0; 
            primer_enter=1;
            if(caso > casos) 
                break;
        }
        if (( entrada.length()==3) && (entrada.find_first_not_of("0123456789") ==string::npos))
        {
            RAM[num_inst]=entrada;
            ejecutaInstruccion(entrada,num_inst);
            inst_caso++;
            num_inst++;
            instrucciones[caso]=inst_caso;
        }
    }
    num_inst++;
    //cout<<num_inst<<endl;
    for(int i=0;i<casos;i++){
        cout<< instrucciones[i]<<endl;
        cout<<endl;
    }
    return 0;
}

