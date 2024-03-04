#include "client2.h"
#include "ui_gestionclient.h"
#include "client.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
gestionclient::gestionclient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestionclient)
{
    ui->setupUi(this);
    client c1;
    ui->tableView_2->setModel(c1.afficher_client());
}

gestionclient::~gestionclient()
{
    delete ui;
}

void gestionclient::on_pushButtonajouter_clicked()
{
    QMessageBox msgBox;
    int id;
    id = ui->lineEditcin->text().toInt();
    QString nom = ui->lineEditnom->text();
    QString prenom = ui->lineEditprenom->text();
    QString date = ui->dateEdit_2->text();
    QString adresse = ui->lineEditadresse->text();
    int numero = ui->lineEditnumero->text().toInt();
    QString email = ui->lineEditemail->text();
    QString sexe = ui->comboBox_5->currentText();
    QString nums = QString::number(numero);
    client c(id, nom, prenom, date, adresse, email, numero, sexe);

    if (ui->lineEditcin->text().size() == 8) {
        if (nums.size() == 8) {
            if ((sexe == "male" || sexe == "female")) {
                QRegularExpression emailRegex("^[A-Za-z0-9._%+-]+@gmail.com$", QRegularExpression::CaseInsensitiveOption);
                QValidator *emailValidator = new QRegularExpressionValidator(emailRegex, this);
                if (emailValidator->validate(email, id) == QValidator::Acceptable) {
                    bool test = c.ajouter_client();
                    if (test) {
                        msgBox.setText("Ajout avec succes.");
                        ui->tableView_2->setModel(c.afficher_client());
                    } else {
                        msgBox.setText("Echec d'ajout");
                    }
                } else {
                    msgBox.setText("Adresse e-mail invalide. Veuillez saisir une adresse Gmail valide.");
                }
            } else {
                msgBox.setText("svp verifier votre sexe : male ou female");
            }
        } else {
            msgBox.setText("svp verifier votre numero de telephone");
        }
    } else {
        msgBox.setText("svp verifier votre numero de carte d'identite");
    }

    msgBox.exec();
}

void gestionclient::on_pushButtonsupprimerclient_clicked()
{
    client c1;
    if(ui->lineeditcinsup->text()!="")
    {    c1.setcin(ui->lineeditcinsup->text().toInt());
    bool test=c1.supprimer_client(c1.getcin());
    QMessageBox msgBox;

    if(test)
       { msgBox.setText("Suppression avec succes.");
        ui->tableView_2->setModel(c1.afficher_client());

    }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();
}
}

void gestionclient::on_pushButton_2_clicked()
{
    bool test; QMessageBox msgBox;
        if(ui->lineeditcinsup->text()!=""){
        int cin=ui->lineeditcinsup->text().toInt();
        QString nom=ui->lineEditnom_6->text();
        QString prenom=ui->lineEditprenom_7->text();
        QString date=ui->lineEditdate_7->text();
        int numero=ui->lineEditnumero_7->text().toInt();
        QString sexe=ui->lineeditsexe_7->text();
        QString email=ui->lineEditemail_7->text();
        QString adresse=ui->lineEditadresse_7->text();


        client c(cin,nom,prenom,date,adresse,email,numero,sexe);
         test=c.modifier_client();

         if(test)
           {  msgBox.setText("Modifier avec succes.");
             ui->tableView_2->setModel(c.afficher_client());
         }
         else
             msgBox.setText("Echec de modification");}
        else
        msgBox.setText("s'il vous plait remplir les champs à modifier");
         msgBox.exec();
}

void gestionclient::on_tableView_2_activated(const QModelIndex &index)
{
    QString val;QSqlQuery query;


        val=ui->tableView_2->model()->data(index).toString();
       int  x=ui->tableView_2->model()->data(index).toInt();

         query.prepare("select * from client where cin=:x or nom =:val or prenom=:val or datee=:val or adresse=:val or email=:val or numero=:x or sexe=:val ");
         query.bindValue(":val",val);
         query.bindValue(":x",x);

         if (query.exec())
         {
             while (query.next())
             {
                 ui->lineeditcinsup->setText(query.value(0).toString());
                 ui->lineEditnom_6->setText(query.value(1).toString());
                 ui->lineEditprenom_7->setText(query.value(2).toString());
                 ui->lineEditdate_7->setText(query.value(3).toString());
                 ui->lineEditadresse_7->setText(query.value(4).toString());
                 ui->lineEditemail_7->setText(query.value(5).toString());
                 ui->lineEditnumero_7->setText(query.value(6).toString());
                 ui->lineeditsexe_7->setText(query.value(7).toString());


             }
         }
         else
         {
             QMessageBox::critical(this ,tr("error::"),query.lastError().text());
         }
}
