#ifndef DEPARTMENTVIEW_H
#define DEPARTMENTVIEW_H

#include <QWidget>

namespace Ui {
class LabView;
}

class LabView : public QWidget
{
    Q_OBJECT

public:
    explicit LabView(QWidget *parent = nullptr);
    ~LabView()
    {
        delete ui;
    }

private:
    Ui::LabView *ui;
};

#endif // DEPARTMENTVIEW_H
