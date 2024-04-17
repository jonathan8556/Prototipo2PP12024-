#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
private:
    std::string nombreUsuario;
    std::string contrasena;
public
    Usuario(std::string nombre, std::string pass);
    std::string getNombreUsuario();  // Método getter
    std::string getContrasena();  // Método getter
};

#endif
