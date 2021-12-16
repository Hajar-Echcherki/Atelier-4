#include <iostream>
#include <list>
using namespace std;
class Personne { //creation du classe du personne
public :
string nom;
string prenom ;
int age ;
public :
Personne(string nom ,string prenom, int age ){
this->nom = nom ;  
this->prenom= prenom ;
this->age = age;
}
};
int main()
{
list<Personne> m; //creation du liste et l'objet m 
m.push_back(Personne("Omar" ,"Anas", 18 )); //L'ajout d un nouvel élément à la fin de la liste
std::list<Personne>::iterator it; //un conteneur qui prend en charge l'insertion et la suppression ..!
for (it = m.begin(); it != m.end(); ++it){
std::cout << it->prenom<<" ";
std::cout << it->nom<<" ";
std::cout << it->age;
return 0;
}
 }