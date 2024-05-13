#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string Tipo;
    cin >> Tipo;
    for (char &c : Tipo) { 
        c = std::tolower(c); 
    } 
    if (Tipo == "vertebrado")
    {
        cin >> Tipo;
        if (Tipo == "ave")
        {
            cin >> Tipo;
            if (Tipo == "carnivoro")
            {
                cout << "aguia" <<endl;
            }
            else if (Tipo == "onivoro")
            {
                cout << "pomba" <<endl;
            }
            
            
        }
        else if (Tipo == "mamifero")
        {
           cin >> Tipo;
            if (Tipo == "onivoro")
            {
                cout << "homem" <<endl;
            }
            else if (Tipo == "herbivoro")
            {
                cout << "vaca" <<endl;
            }
        }
        
        
    }
    else if (Tipo == "invertebrado")
    {
        cin >> Tipo;
        if (Tipo == "inseto")
        {
            cin >> Tipo;
            if (Tipo == "hematofago")
            {
                cout << "pulga" <<endl;
            }
            else if (Tipo == "herbivoro")
            {
                cout << "lagarta" <<endl;
            }
            
            
        }
        else if (Tipo == "anelideo")
        {
           cin >> Tipo;
            if (Tipo == "hematofago")
            {
                cout << "sanguessuga" <<endl;
            }
            else if (Tipo == "onivoro")
            {
                cout << "minhoca" <<endl;
            }
        }
    }
    
    
    

    return 0;
}