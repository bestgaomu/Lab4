#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <QMainWindow>
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
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

signals:
    void loginSuccess();

private slots:
    void on_btn_login_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGINVIEW_H
