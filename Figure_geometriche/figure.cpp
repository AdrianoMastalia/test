#include <iostream>
#include <sstream>
using namespace std;
struct rettangolo{
int lato_1;
int lato_2;

rettangolo();
int calcola_area();
int calcola_perimetro();
};

rettangolo::rettangolo(){
	lato_1 = 0;
	lato_2 = 0;
}

int rettangolo::calcola_area(){
	return lato_1*lato_2;
}

int rettangolo::calcola_perimetro(){
	return (lato_1+lato_2)*2;
}

int main(){
rettangolo r1;
cout<<"Inserisci valore lato 1" << endl;
int lato1;
cin >> lato1;
cout<<"Inserisci valore lato 2" <<endl;
int lato2;
cin>>lato2;
r1.lato_1 = lato1;
r1.lato_2 = lato2;
cout<<"L'area del rettangolo vale "<<r1.calcola_area()<<endl;
cout << "Il perimetro del rettangolo vale "<<r1.calcola_perimetro()<<endl;
}