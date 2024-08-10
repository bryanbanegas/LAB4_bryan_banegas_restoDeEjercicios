#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tarea.h"
#include "tareadiaria.h"
#include "tareasemanal.h"
#include "producto.h"
#include "electronico.h"
#include "alimento.h"
#include "ropa.h"
#include "QVector"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_tarea_Diaria_clicked();

    void on_tarea_Semanal_clicked();

    void on_imprimir_clicked();

    void on_agregar_clicked();

    void on_eliminar_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_imprimir_2_clicked();

    void on_modificar_clicked();

private:
    Ui::MainWindow *ui;
    QVector<tarea*> tareas;
    QVector<producto*> productos;
    int tipo=0;
};
#endif // MAINWINDOW_H
