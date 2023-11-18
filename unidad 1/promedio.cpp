//incluir la liberia 
#include<iostream>
/*utilizar todas las caractres y funciones
de la libreria
*/
using namespace std;
//funcion principal
int main(){
	//declarar variable 
	int a,b,c,d,e,promedio;
	cout<<"bienvenido a esta rutina en el cual calculara tu promedio"<<endl;
	cout<<"por favor digita el primera evaluacion"<<endl;
	cin>>a;
	cout<<"por favor digita el segunda evaluacion"<<endl;
	cin>>b;
	cout<<"por favor digita el tercera evaluacion"<<endl;
	cin>>c;
	cout<<"por favor digita en cuarta evaluacion"<<endl;
	cin>>d;
	cout<<"por favor digita el quinta evaluacion"<<endl;
	cin>>e;
	promedio = (a+b+c+e)/5;
	cout<<"tu promedio general es de:"<<promedio<<endl;
	if(promedio >7){
		cout<<"tu promedio es aprobatorio"<<endl;	
	}
	else{
		cout<<"lo lamento tu calificacion no es aprobatoria";
	} 
	cout<<"gracias por usar esta aplicacion";
	return 0;
}
