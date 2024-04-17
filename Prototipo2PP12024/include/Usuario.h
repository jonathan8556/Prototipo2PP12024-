#ifndef USUARIO_H
#define USUARIO_H

#include <string>

class Usuario {
private:
    std::string nombreUsuario;
    std::string contrasena;
public
    Usuario(std::string nombre, std::string pass);
    std::string getNombreUsuario();  // M�todo getter
    std::string getContrasena();  // M�todo getter
};

#endif
