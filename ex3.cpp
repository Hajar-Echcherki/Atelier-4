#include <iostream>
#include <list>
#include <iterator>
 using  namespace std; 
 void showlist (list<int>L){ //la creation du fonction showlist
 	list <int> :: iterator o ; // creation du list
 	for (o =L.begin();o !=L.end() ;++o) //d une facon croissante
 	cout << "\t" << *o ;
 	cout << "\n" ;
 }
 int main () { 
 list <int> TL ;
 int n ;
 int a;
 cout << "entrer les nombres ta liste " ; // de combien la liste est composée
 cin>> n; //faire entrer le nombre
 for (int i=0;i<n;i++){
 	cout <<"entrer chaque element :" ;
 	cin >>a ; 
 	TL.push_back(a);
 }
 cout <<"La 1ere liste : "; // la premiere liste qu on a tapé
 showlist (TL);
 cout << "La liste triee est : " ; //la liste demandée
 TL.sort(); //utilisé pour spécifier l'ordre dans lequel les éléments doivent être triés.
 showlist(TL); //appele de fonction
 return 0;
 }