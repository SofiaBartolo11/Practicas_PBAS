                                                                             #include<iostream>
#include<string>
#define USER "FLORES"           
#define PASS "MARIPOSAAS"
using namespace std;                       
int main(){
	string usuario, password;
	
	cout<<"\t\t\tLOGIN DE USUARIO"<<endl;
	cout<<"\t\t\t----------------"<<endl;                                                                                      
	cout<<"\n\tUsuario: ";
	getline(cin, usuario);
	cout<<"\tPassword: ";
	getline(cin,password);
	
	if (usuario == USER && password == PASS){           
	else{
		cout<<"\n\tEL usuario y/o password son incorrectos"<<endl;
	}
cin.get();
cin.get();
return 0;	
}


