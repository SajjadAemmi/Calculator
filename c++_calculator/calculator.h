#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void NumPressed();

    void on_btnDiv_clicked();
    void on_btnMul_clicked();
    void on_btnSum_clicked();
    void on_btnSub_clicked();
    void on_btnEqual_clicked();
    void on_btnChangeSign_clicked();
};

#endif // CALCULATOR_H
