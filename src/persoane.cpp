#include "persoane.h"

void persoane :: citire(ifstream &fin){
    fin>>cnp;
    fin.get();
    getline(fin,nume);
    getline(fin,nume_film);
    fin>>procent;
}


void persoane :: afisare(){
    cout<<"cnp="<<cnp<<endl;
    cout<<"nume="<<nume<<endl;
    cout<<"nume film="<<nume_film<<endl;
    cout<<"procent din incasari="<<procent<<endl;
    cout<<"salariu="<<incasari<<endl<<endl;

}
