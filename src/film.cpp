#include "film.h"

void film :: citire(ifstream &fin){
    fin>>durata;
    fin.get();
    getline(fin,nume);
    getline(fin,tip);

    regiz.citire(fin);
    fin>>nrActori;
    actor aux;
    for(int i=0;i<nrActori;i++){
        aux.citire(fin);
        actori.push_back(aux);
    }
    fin>>nrPersonal;
    persoane aux2;
    for(int i=0;i<nrPersonal;i++){
        aux2.citire(fin);
        personal_tehnic.push_back(aux2);
    }
}

void film :: distribuie_incasari(){
    float dif;
    regiz.incasari=(incasariTotale/100)*regiz.procent + regiz.sumaFixa;
    dif=regiz.incasari;
    for(int i=0;i<nrActori;i++){
        actori[i].incasari=(incasariTotale/100)*actori[i].procent;
        if(actori[i].principal)
            actori[i].incasari+=(incasariTotale/100)*10;
        dif+=actori[i].incasari;
    }
    for(int i=0;i<nrPersonal;i++){
        personal_tehnic[i].incasari=(incasariTotale/100)*personal_tehnic[i].procent;
        dif+=personal_tehnic[i].incasari;
    }
    if(dif>incasariTotale){
        cout<<"Suma care trebuie platita exceda incasarile totale ale filmului";
        exit(1);
    }
    venit_ramas=incasariTotale - dif;
}


void film :: afisare(){
    cout<<"\n\nDurata filmului="<<durata<<" minute\n";
    cout<<"Numele filmului="<<nume<<"\n";
    cout<<"Tipul filmului="<<tip<<"\n";
    cout<<"Incasarile totale="<<incasariTotale<<"\n";
    cout<<"Venit ramas="<<venit_ramas<<"\n\n";

    regiz.afisare();
    cout<<"Numar de actori="<<nrActori<<"\n\n";
    for(int i=0;i<nrActori;i++)
        actori[i].afisare();
    cout<<"Numar de personal tehnic="<<nrPersonal<<"\n\n";
    for(int i=0;i<nrPersonal;i++)
        personal_tehnic[i].afisare();

}
