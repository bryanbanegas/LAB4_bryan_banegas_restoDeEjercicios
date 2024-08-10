#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "QString"

class producto
{
protected:

    QString codigo;
    QString nombre;
public:
    producto(QString& codigo, QString& nombre)
        :codigo(codigo), nombre(nombre){}

    virtual QString getCodigo(){
        return codigo;
    }

    virtual void modificar(QString& codigoNuevo, QString& nombreNuevo){
        codigo=codigoNuevo;
        nombre=nombreNuevo;
    }

    virtual QString getInfo(){
        QString info="Codigo: "+codigo+" Nombre: "+nombre;
        return info;
    }
};

#endif // PRODUCTO_H
