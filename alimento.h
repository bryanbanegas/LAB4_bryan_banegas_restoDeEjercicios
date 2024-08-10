#ifndef ALIMENTO_H
#define ALIMENTO_H
#include "producto.h"

class alimento: public producto
{
public:
    alimento(QString& codigo, QString& nombre)
        :producto(codigo, nombre){}

    QString getInfo(){
        QString info="Producto alimenticio: ";
        info+=producto::getInfo();
        return info;
    }
};

#endif // ALIMENTO_H
