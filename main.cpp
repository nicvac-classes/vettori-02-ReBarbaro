#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"quanti studenti ci sono in una classe?"
    cin>>m;
    string nomi[n];
    string nome;
    int i;
    i=0;
    while(i<n){
        cout<<"quale è il"<<i+1<<"nome?"<<endl;
        cin>>nomi[i];
        i=i+1;
        }
        float voti[n];
        float voto;
        i=0;
        while(i<n){
            cout<<"quale è il"<<i+1<<"voto?"<<endl;
            cin>>voti;
            i=i+1;
            }
            int assenze[n];
            int assenza;
            i = 0;
             while (i < n) {
             cout << "quante assenze ha il" << i + 1 << "alunno" << endl;
             cin >> assenze[i];
             i = i + 1;
             }
             i = 0;
             while (i < n) {
             cout << "il nome del" << i + 1 << "alunno è" << nomi[i] << endl;
              i = i + 1;
       }
    i = 0;
    while (i < n) {
        cout << "il voto del" << i + 1 << "alunno è" << voti[i] << endl;
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "le assenze del" << i + 1 << "alunno sono " << assenze[i] << endl;
        i = i + 1;
    }
    cout << "i dati di quale alunno vuoi visualizzare?" << endl;
    cin >> i;
    if (i >= 0 && i < n) {
        cout << "studente:" << nomi[i] << "voto:" << voti[i] << "assenze:" << assenze[i] << endl;
    }
    cout << "quale è il nome?" << endl;
    cin >> nome;
    if (nome == nomi[i]) {
        cout << "voto:" << voti[i] << "assenze" << assenze[i] << endl;
    }
    
}

