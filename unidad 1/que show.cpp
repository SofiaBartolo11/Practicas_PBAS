#include<iostream>
using namespace std;
int main(){
	string user = "305";
	string pace = "que show";
	string usuario,pass;
	cout<<"digita tu usuario"<<endl;
	getline(cin,usuario);
	cout<<"digita tu password"<<endl;
	getline(cin,pass);
	if(usuario == user and pass == pass){
		cout<<"bienvenido";
	}
	else{
	cout<<"¿que haces aqui?";
	}
}
