#ifndef TAREADIARIA_H
#define TAREADIARIA_H
#import "tarea.h"
class tareaDiaria: public tarea
{
public:
    tareaDiaria(QString& nombre, QString& fecha, QString& descripcion)
        :tarea(nombre, fecha, descripcion){}

    QString getInfo(){
        QString info="Tarea Diaria: ";
        info+=tarea::getInfo();
        return info;
    }
};

#endif // TAREADIARIA_H
