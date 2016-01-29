#ifndef QTFALSE_H
#define QTFALSE_H

#include <QWidget>

namespace Ui {
class QtFalse;
}

class QtFalse : public QWidget
{
    Q_OBJECT

public:
    explicit QtFalse(QWidget *parent = 0);
    ~QtFalse();

private:
    Ui::QtFalse *ui;
};

#endif // QTFALSE_H
