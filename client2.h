#ifndef GESTIONCLIENT_H
#define GESTIONCLIENT_H

#include <QDialog>

namespace Ui {
class gestionclient;
}

class gestionclient : public QDialog
{
    Q_OBJECT

public:
    explicit gestionclient(QWidget *parent = nullptr);
    ~gestionclient();

private slots:
    void on_pushButtonajouter_clicked();

    void on_pushButtonsupprimerclient_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

private:
    Ui::gestionclient *ui;
};

#endif // GESTIONCLIENT_H
