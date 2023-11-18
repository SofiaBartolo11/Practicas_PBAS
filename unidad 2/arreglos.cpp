#include <iostream>
using namespace std;
int main(){
	int miNumero[6];
	string pronombres[4];
	
	// Inicializar el primer numero
	miNumero[0]=10;
	miNumero[1]=20;
	miNumero[2]=30;
	miNumero[3]=40;
	miNumero[4]=50;
	miNumero[5]=60;
	
	// Ponombres
	pronombres[0] = "el";
	pronombres [1] = "ella";
	pronombres [2] = "ellos";
	pronombres[3] = " nosotros";
	
	for (int i=0 ;i<=6; i++){
		cout<<"conteos:" <<i<<":"<< miNumero[i]<<endl;
	}
 for( int a=0; a<=4; a++){
 	cout<<"los pronombres son:"<<pronombres[a]<<endl;
 }
 return 0;
}
