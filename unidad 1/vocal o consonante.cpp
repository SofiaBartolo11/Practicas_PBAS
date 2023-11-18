#include<iostream>
using namespace std;
int main(){
	char vocal;
	cout<<"esta programa te ayudara aidentificar si es una vocal o consonante";
	cout<<"digita el primer caracter";
	cin>>vocal;
	if(vocal == 'a' or vocal == 'e' or vocal == 'i' or vocal == 'o' or vocal == 'u'){
		cout<<"es vocal";
	}
	else{
		cout<<"no es vocal";
	}
}
