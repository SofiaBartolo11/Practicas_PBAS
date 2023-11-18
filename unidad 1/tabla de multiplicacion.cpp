#include"iostream"
using namespace std;
int main(){
	int i;
	int num;
	int multiplicacion;
	cout<<"Inserta el numero de la tabla de multiplicacion que deseas"<<endl;
	cin>>num;
	for(i=1;i<=10;i++){
		multiplicacion= num*i;
		cout<<num<<"x"<<i<<" = "<<multiplicacion<<endl;
}
return 0;

}
