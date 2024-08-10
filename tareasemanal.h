#ifndef TAREASEMANAL_H
#define TAREASEMANAL_H
#include "tarea.h"

class tareaSemanal: public tarea
{
public:
    tareaSemanal(QString& nombre, QString& fecha, QString& descripcion)
        :tarea(nombre, fecha, descripcion){}

    QString getInfo(){
        QString info="Tarea Semanal: ";
        info+=tarea::getInfo();
        return info;
    }
};

#endif // TAREASEMANAL_H
