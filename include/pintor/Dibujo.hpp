#include<string>
#include<list>
#include <vector.hpp>

using namespace std;


class Dibujo
{
private:
    list<string> lineas;
    vector posicion;
    vector velocidad;
public:
    Dibujo() {}
    ~Dibujo() {}
    void AgregarLinea(string linea){
        this -> lineas.push_back(linea);
        
    }
    list<string> ObtenerLineas(){
        return this->lineas;
        
    }
};
//sdfsf




