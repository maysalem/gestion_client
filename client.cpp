#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

client::client()
{

}
client::client(int a,QString b,QString c,QString d,QString e,QString x,int f,QString g)
{
    this->cin=a;
    this->nom=b;
    this->prenom=c;
    this->date=d;
    this->adresse=e;
    this->email=x;
    this->numero=f;
    this->sexe=g;
}
QString client::getemail()
{
    return email;
}
int client::getcin()
{
    return cin;
}
QString client::getnom()
{
    return nom;
}
QString client::getprenom()
{
    return prenom;
}
QString client::getadresse()
{
    return  adresse;
}
QString client::getdate()
{
    return date;
}
int client::getnumero()
{
    return numero;
}
QString client::getsexe()
{
    return sexe;
}
void client::setcin(int a)
{
    this->cin=a;
}
void client::setadresse(QString a)
{
    this->adresse=a;
}
void client::setdate(QString a)
{
    this->date=a;
}
void client::setnom(QString a)
{
    this->nom=a;
}
void client::setemail(QString a)
{
    this->email=a;
}
void client::setnumero(int a)
{
    this->numero=a;
}
void client::setprenom(QString a)
{
    this->prenom=a;
}
void client::setsexe(QString a)
{
    this->sexe=a;
}
bool client::ajouter_client()
{

    QSqlQuery query;
  QString cin_string= QString::number(cin);
  QString numero_string= QString::number(numero);

         query.prepare("INSERT INTO client (cin, nom, prenom,datee,adresse,email,numero,sexe) "
                       "VALUES (:cin, :forename, :surname,:date,:adresse,:email,:numero,:sexe)");
         query.bindValue(":cin",cin_string);
         query.bindValue(":forename", nom);
         query.bindValue(":surname", prenom);
         query.bindValue(":date", date);
         query.bindValue(":adresse", adresse);
         query.bindValue(":numero", numero_string);
         query.bindValue(":email", email);
         query.bindValue(":sexe", sexe);
        return query.exec();
}
bool client::supprimer_client(int cin)
{
    QSqlQuery query;
         query.prepare(" Delete from client where cin=:cin");
         query.bindValue(0, cin);

        return query.exec();


}
bool client::modifier_client()
{

        QSqlQuery query;

        query.prepare("update client set nom=:nom,prenom=:prenom,datee=:date,adresse=:adresse,email=:email,numero=:numero,sexe=:sexe where cin=:cin");
        query.bindValue(":cin",cin);
        query.bindValue(":nom",nom);
        query.bindValue(":prenom",prenom);
        query.bindValue(":date", date);
        query.bindValue(":adresse", adresse);
        query.bindValue(":numero", numero);
        query.bindValue(":email", email);
        query.bindValue(":sexe", sexe);
        return    query.exec();

}
QSqlQueryModel* client::afficher_client()
{
  QSqlQueryModel* model=new QSqlQueryModel();


   model->setQuery("SELECT* FROM client ");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("date de naissance"));
   model->setHeaderData(4, Qt::Horizontal, QObject::tr("adresse"));
   model->setHeaderData(5, Qt::Horizontal, QObject::tr("email"));

   model->setHeaderData(6, Qt::Horizontal, QObject::tr("numero de telephone"));
   model->setHeaderData(7, Qt::Horizontal, QObject::tr("sexe"));

   return  model;
}
