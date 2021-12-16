#include <iostream>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez l indice de l entier a diviser: " << endl; 
try {

cin >> x ; // fair entrer l entier 
if (x<0) // le premier cas
throw "error , negative index " ; //permet de créer une erreur personnalisée
if (x>=10)
throw x ;
}
	catch (const char*str){ // pour le message d erreur
		cout <<"exception : " <<str<<endl ;
	}
	catch ( int e) { 
	cout <<"exception  "<< e << " hors de portée" <<endl ; // quand on entre  un nombre plus que 10 
	}
	cout << "entrer le diviseur " <<endl; 
	try {
		cin >> y;
		if (y==0)
		throw  "c'est impossible " ; //si on entre  un nombre égale à 0 .
	} catch (const char *str1) {
		cout <<"exception :" <<str1<<endl ;
		
	}
	cout << "le resultat de la division est : " <<endl ;
	cout << Test::division(x,y) << endl ;
	return 0;
	}
	