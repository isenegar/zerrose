#ifndef CREATEWORLDDIALOG_H
#define CREATEWORLDDIALOG_H

#include <QDialog>
class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class CreateWorldDialog : public QDialog
{
    Q_OBJECT
public:
    explicit CreateWorldDialog(QWidget *parent = 0);

signals:

public slots:

private:
 QLabel *label;
 QLineEdit *lineEdit;
 QCheckBox *caseCheckBox;
 QCheckBox *backwardCheckBox;
 QPushButton *findButton;
 QPushButton *closeButton;
};

#endif // CREATEWORLDDIALOG_H
