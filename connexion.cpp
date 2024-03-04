#include "connexion.h"
#include <QMessageBox>

connexion::connexion()
{

}
bool connexion::ouvrirconnexion()
{bool test=false;
    db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("data_bd");
    db.setUserName("may");
    db.setPassword("may");

  if(db.open())
  {
      test=true;
  }
  return test;

}

void connexion::fermerconnexion()
{
    db.close();
}
