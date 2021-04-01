#include "calculator.h"
#include "ui_calculator.h"

double firstNumber = 0.0;
QString selectedOperator = "";

Calculator::Calculator(QWidget *parent) : QMainWindow(parent), ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->display->setText(QString::number(firstNumber));

    for (int i = 0; i < 10; i++) {
        QPushButton *btn = Calculator::findChild<QPushButton *>("btn" + QString::number(i));
        connect(btn, SIGNAL(clicked()), this, SLOT(NumPressed()));
    }
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed()
{
    QPushButton *btn = (QPushButton *)sender();
    QString butVal = btn->text();
    QString displayVal = ui->display->text();

    if(displayVal.toDouble() == 0)
    {
        ui->display->setText(butVal);
    }
    else {
        QString newVal = displayVal + butVal;
        ui->display->setText(newVal);
    }
}

//void Calculator::on_btn7_clicked()
//{
//    QString displayVal = ui->display->text();

//    if(displayVal.toDouble() == 0)
//    {
//        ui->display->setText("7");
//    }
//    else {
//        QString newVal = displayVal + "7";
//        ui->display->setText(newVal);
//    }
//}

void Calculator::on_btnDiv_clicked()
{
    firstNumber = ui->display->text().toDouble();
    selectedOperator = "/";
    ui->display->setText("0.0");
}

void Calculator::on_btnMul_clicked()
{
    firstNumber = ui->display->text().toDouble();
    selectedOperator = "*";
    ui->display->setText("0.0");
}

void Calculator::on_btnSum_clicked()
{
    firstNumber = ui->display->text().toDouble();
    selectedOperator = "+";
    ui->display->setText("0.0");
}

void Calculator::on_btnSub_clicked()
{
    firstNumber = ui->display->text().toDouble();
    selectedOperator = "-";
    ui->display->setText("0.0");
}

void Calculator::on_btnEqual_clicked()
{
    double secondNumber = ui->display->text().toDouble();
    double answer;

    if(selectedOperator == "+")
    {
        answer = firstNumber + secondNumber;
    }
    else if(selectedOperator == "-")
    {
        answer = firstNumber - secondNumber;
    }
    else if(selectedOperator == "*")
    {
        answer = firstNumber * secondNumber;
    }
    else if(selectedOperator == "/")
    {
        answer = firstNumber / secondNumber;
    }

    ui->display->setText(QString::number(answer));
}

void Calculator::on_btnChangeSign_clicked()
{
    double number = ui->display->text().toDouble();
    number = -1 * number;
    ui->display->setText(QString::number(number));
}
