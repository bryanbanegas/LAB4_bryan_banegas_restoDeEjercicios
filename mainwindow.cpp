#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tarea_Diaria_clicked()
{
    QString nombre=ui->nombreLine->text();
    QString fecha=ui->fechaLine->text();
    QString descripcion=ui->descripcionLine->text();
    tarea* nuevaTarea=new tareaDiaria(nombre, fecha, descripcion);
    tareas.append(nuevaTarea);
}


void MainWindow::on_tarea_Semanal_clicked()
{
    QString nombre=ui->nombreLine->text();
    QString fecha=ui->fechaLine->text();
    QString descripcion=ui->descripcionLine->text();
    tarea* nuevaTarea=new tareaSemanal(nombre, fecha, descripcion);
    tareas.append(nuevaTarea);
}


void MainWindow::on_imprimir_clicked()
{
    QString info="";
    for(int i=0;i<tareas.size();i++){
        info+=tareas.at(i)->getInfo();
        info+="\n";
    }
    ui->textEdit->setText(info);
}


void MainWindow::on_agregar_clicked()
{
    QString codigo=ui->codigoLine->text();
    QString nombre=ui->nombreLine_2->text();
    producto* nuevoProducto;
    if(tipo==0){
        nuevoProducto=new electronico(codigo, nombre);
    }else if(tipo==1){
        nuevoProducto=new alimento(codigo, nombre);
    }else{
        nuevoProducto=new ropa(codigo, nombre);
    }
    productos.append(nuevoProducto);
}


void MainWindow::on_eliminar_clicked()
{
    QString codigo=ui->codigoLine_2->text();
    for(int i=0;i<productos.size();i++){
        if(codigo==productos.at(i)->getCodigo()){
            producto* paraEliminar=productos.at(i);
            delete paraEliminar;
            productos.removeAt(i);
            break;
        }
    }
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    tipo=index;
}


void MainWindow::on_imprimir_2_clicked()
{
    QString info="";
    for(int i=0;i<productos.size();i++){
        info+=productos.at(i)->getInfo();
        info+="\n";
    }
    ui->textEdit_2->setText(info);
}


void MainWindow::on_modificar_clicked()
{
    QString codigo=ui->codigoLine_2->text();
    QString codigoNuevo=ui->modificarCodigo->text();
    QString nombre=ui->modificarNombre->text();
    for(int i=0;i<productos.size();i++){
        if(codigo==productos.at(i)->getCodigo()){
            productos.at(i)->modificar(codigoNuevo, nombre);
            break;
        }
    }
}

