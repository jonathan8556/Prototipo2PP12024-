#include "Usuario.h"

Usuario::Usuario(std::string nombre, std::string pass) {
    nombreUsuario = nombre;
    contrasena = pass;
}


std::string Usuario::getNombreUsuario() {
    return nombreUsuario;
}


std::string Usuario::getContrasena() {
    return contrasena;
}
