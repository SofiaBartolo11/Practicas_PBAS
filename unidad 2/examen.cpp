#include <iostream>
#include <string>
using namespace std;
const int MAX_USERS = 10; // Número máximo de usuarios
const string USERS[] = {"sofia", "flor", "esmeralda"}; // arreglo para usuarios
const string PASSWORDS[] = {"12345", "hola2", "ingresar"}; // areglo para password
// validacion de usuarios utilizando un dato tipo bolleano 
bool isValidUser(const string & username, const string & password) {
    for (int i = 0; i < MAX_USERS; i++) {
        if (USERS[i] == username && PASSWORDS[i] == password) {
            return true;
        }
    }
    return false;
    
}
int main() {
    string username, password;
    cout <<"BIENVENIDO AL SISTEMA"<<endl;
    cout << "Ingrese su nombre de usuario: ";
    cin >> username;
    cout << "Ingrese su contraseña: ";
    cin >> password;
    if (isValidUser(username, password)) {
        cout << "Inicio de sesión exitoso. ¡Bienvenido, " << username << "!" << endl;
        
        
        
        
        
        
    } else {
        cout << "Credenciales incorrectas. Inicio de sesión fallido." << endl;
    }
    return 0;
}
   
  
  

