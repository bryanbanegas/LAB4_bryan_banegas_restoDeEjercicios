#ifndef ELECTRONICO_H
#define ELECTRONICO_H
#include "producto.h"

class electronico: public producto
{
public:
    electronico(QString& codigo, QString& nombre)
        :producto(codigo, nombre){}

    QString getInfo(){
        QString info="Producto electronico: ";
        info+=producto::getInfo();
        return info;
    }
};

#endif // ELECTRONICO_H
