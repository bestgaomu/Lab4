#ifndef PATIENTEDITVIEW_H
#define PATIENTEDITVIEW_H

#include <QWidget>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QObject>
#include <QItemSelectionModel>
#include <QDateTime>
#include <QUuid>
#include <QDataWidgetMapper>

#include "database.h"

namespace Ui {
class PatientEditView;
}

class PatientEditView : public QWidget
{
    Q_OBJECT

public:
    explicit PatientEditView(QWidget *parent = nullptr,int index = 0);
    ~PatientEditView();

    QDataWidgetMapper *dataMapper;

signals:
    void cancel();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::PatientEditView *ui;
};

#endif // PATIENTEDITVIEW_H
