#ifndef ROPA_H
#define ROPA_H
#include "producto.h"

class ropa: public producto
{
public:
    ropa(QString& codigo, QString& nombre)
        :producto(codigo, nombre){}

    QString getInfo(){
        QString info="Producto de ropa: ";
        info+=producto::getInfo();
        return info;
    }
};

#endif // ROPA_H
