#ifndef TAREA_H
#define TAREA_H
#include "QString"

class tarea
{
protected:
    QString nombre;
    QString fecha;
    QString descripcion;
public:
    tarea(QString& nombre, QString& fecha, QString& descripcion)
        : nombre(nombre), fecha(fecha), descripcion(descripcion){}

    virtual QString getInfo(){
        QString info="Nombre: "+nombre+" Fecha: "+fecha+" Descripcion: "+descripcion;
        return info;
    }
};

#endif // TAREA_H
