#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Usuario {
private:
    string nombreUsuario;
    string contrasena;

public:
    Usuario(string nombre, string pass) : nombreUsuario(nombre), contrasena(pass) {}
    string getNombreUsuario() { return nombreUsuario; }
    string getContrasena() { return contrasena; }
};

class CatalogoX {
    // Implementa los métodos y variables para el catálogo aquí
};

bool autenticarUsuario(string nombreUsuario, string contrasena);
void mostrarMenuGeneral(string carnet, string nombreCompleto);
void mostrarMenuCatalogos();
void mostrarMenuInformes();
void crearRegistro();
void leerRegistro();
void actualizarRegistro();
void borrarRegistro();
void generarInforme();

int main() {
    string nombreUsuario, contrasena;
    cout << "Ingrese su nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Ingrese su contraseña: ";
    cin >> contrasena;

    if (!autenticarUsuario(nombreUsuario, contrasena)) {
        cout << "Error de autenticacion. Usuario o contrasena incorrectos." << endl;
        return 1;
    }

    string carnet = "TuCarnet";
    string nombreCompleto = "Tu Nombre Completo";

    while (true) {  // Bucle para mantener el menú en ejecución
        mostrarMenuGeneral(carnet, nombreCompleto);

        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarMenuCatalogos();
                break;
            case 2:
                mostrarMenuInformes();
                break;
            case 3:
                cout << "Saliendo del sistema..." << endl;
                return 0;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    }

    return 0;
}


bool autenticarUsuario(string nombreUsuario, string contrasena) {
    ifstream archivoUsuarios("usuarios.txt");
    if (!archivoUsuarios.is_open()) {
        cerr << "Error al abrir el archivo de usuarios." << endl;
        return false;
    }

    string usuario, pass;
    while (archivoUsuarios >> usuario >> pass) {
        if (usuario == nombreUsuario && pass == contrasena) {
            archivoUsuarios.close();
            return true;
        }
    }

    archivoUsuarios.close();
    return false;
}

void mostrarMenuGeneral(string carnet, string nombreCompleto) {
    cout << "Bienvenido, " << carnet << " - " << nombreCompleto << endl;
    cout << "1. Catálogos" << endl;
    cout << "2. Informes" << endl;
    cout << "3. Salir del sistema" << endl;
    cout << "Ingrese su opcion: ";
}

void mostrarMenuCatalogos() {
    cout << "Submenú de Catálogos" << endl;
    cout << "1. Crear registro" << endl;
    cout << "2. Leer registro" << endl;
    cout << "3. Actualizar registro" << endl;
    cout << "4. Borrar registro" << endl;
    cout << "5. Regresar al menú anterior" << endl;
    cout << "Ingrese su opción: ";
}

void mostrarMenuInformes() {

}

void crearRegistro() {

}

void leerRegistro() {

}

void actualizarRegistro() {

}

void borrarRegistro() {

}

void generarInforme() {

}
