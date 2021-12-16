#include <iostream>
#include <iomanip> //pour affecter l'état des objets iostream.
#include <string>

using namespace std;

void afficherDateEtHeure(const string& o) // pour defnir une référence à un objet chaîne dont le contenu ne sera pas modifié".
{
    if ( o.length() != 12 )
 cout << "Chaine invalide." << endl; //utilisé pour imprimer les messages d'erreur. 
    else
    {
 cout << "La date est  : " << o.substr(0,2) << "/" << o.substr(2,2) << "/" << o.substr(4,4) << endl; //substr:une fonction pour obtenir une sous-chaîne en C++
 cout << "L'heure est : " << o.substr(8,2) << "h" << o.substr(10,2) << endl; //afficher l'heure
cout << " 010920091123 la date du 1er septembre 2009 a 11h23." ;
    }
}

int main()
{
    string o("010920091123");
    afficherDateEtHeure(o); //un exemple
}