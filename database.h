#ifndef DATABASE_H
#define DATABASE_H

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


class DataBase : public QWidget
{
    Q_OBJECT
public:
    DataBase();
    void initDataBase();
    bool initPatientModel();
    QString userLogin(QString username, QString password);
    bool searchPatient(const QString& filter);
    bool deleteCurrentPatient();
    int addNewPatient();
    bool submitPatientEdit();
    void revertPatientEdit();

    static DataBase& getInstance(){
        static DataBase instance;
        return instance;
    }

    QSqlDatabase db;
    std::unique_ptr<QSqlTableModel> patientTabModel;
    std::unique_ptr<QItemSelectionModel> patientSelection;
};

#endif // DATABASE_H
