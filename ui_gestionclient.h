/********************************************************************************
** Form generated from reading UI file 'gestionclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONCLIENT_H
#define UI_GESTIONCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestionclient
{
public:
    QTabWidget *tabWidget_4;
    QWidget *tab_6;
    QPushButton *pushButtonajouter;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *labelcin;
    QLineEdit *lineEditcin;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelnom;
    QLineEdit *lineEditnom;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelprenom;
    QLineEdit *lineEditprenom;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labeladresse;
    QLineEdit *lineEditadresse;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelemail;
    QLineEdit *lineEditemail;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelnumero;
    QLineEdit *lineEditnumero;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_5;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labeldate;
    QDateEdit *dateEdit_2;
    QWidget *tab_7;
    QPushButton *pushButtonsupprimerclient;
    QTableView *tableView_2;
    QWidget *layoutWidget_41;
    QHBoxLayout *horizontalLayout_36;
    QLabel *labelnom_6;
    QLineEdit *lineEditnom_6;
    QWidget *layoutWidget_51;
    QHBoxLayout *horizontalLayout_45;
    QLabel *labelprenom_7;
    QLineEdit *lineEditprenom_7;
    QWidget *layoutWidget_52;
    QHBoxLayout *horizontalLayout_46;
    QLabel *labeldate_7;
    QLineEdit *lineEditdate_7;
    QWidget *layoutWidget_53;
    QHBoxLayout *horizontalLayout_47;
    QLabel *labeladresse_7;
    QLineEdit *lineEditadresse_7;
    QWidget *layoutWidget_54;
    QHBoxLayout *horizontalLayout_48;
    QLabel *labelemail_7;
    QLineEdit *lineEditemail_7;
    QWidget *layoutWidget_55;
    QHBoxLayout *horizontalLayout_49;
    QLabel *labelnumero_7;
    QLineEdit *lineEditnumero_7;
    QWidget *layoutWidget_56;
    QHBoxLayout *horizontalLayout_50;
    QLabel *label_13;
    QLineEdit *lineeditsexe_7;
    QPushButton *pushButton_2;
    QWidget *layoutWidget_17;
    QFormLayout *formLayout_3;
    QLineEdit *lineeditcinsup;
    QLabel *labelcin_3;

    void setupUi(QDialog *gestionclient)
    {
        if (gestionclient->objectName().isEmpty())
            gestionclient->setObjectName(QStringLiteral("gestionclient"));
        gestionclient->resize(1535, 663);
        tabWidget_4 = new QTabWidget(gestionclient);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 40, 1531, 561));
        tabWidget_4->setStyleSheet(QString::fromUtf8("/* Style g\303\251n\303\251ral du tab widget */\n"
"QTabWidget {\n"
"    background-color: #f0f5f9; /* Bleu p\303\242le */\n"
"}\n"
"\n"
"/* Style des onglets */\n"
"QTabBar::tab {\n"
"    background-color: #4e7fc1; /* Bleu */\n"
"    color: #ffffff; /* Blanc */\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* Style des onglets lorsqu'ils sont s\303\251lectionn\303\251s */\n"
"QTabBar::tab:selected {\n"
"    background-color: #ffffff; /* Blanc */\n"
"    color: #4e7fc1; /* Bleu */\n"
"}\n"
"\n"
"/* Style des \303\251tiquettes */\n"
"QLabel {\n"
"    color: #333333;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* Style des champs de saisie */\n"
"QLineEdit {\n"
"    background-color: #f0f0f0; /* Gris clair */\n"
"    border: 2px solid #4e7fc1; /* Bleu */\n"
"    padding: 6px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"/* Style des champs de saisie lorsqu'ils sont activ\303\251s */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2a5286; /* Bleu fonc\303\251 */\n"
"}\n"
"\n"
"/* Style de la vue de l"
                        "iste */\n"
"QListView {\n"
"    background-color: #ffffff; /* Blanc */\n"
"    border: 1px solid #cccccc;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"/* Style du bouton */\n"
"QPushButton {\n"
"    background-color: #4e7fc1; /* Bleu */\n"
"    border: none;\n"
"    color: #ffffff; /* Blanc */\n"
"    padding: 10px 20px;\n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"    margin: 10px 0;\n"
"    cursor: pointer;\n"
"    border-radius: 20px;\n"
"    transition: background-color 0.3s ease;\n"
"}\n"
"\n"
"/* Style du bouton lorsqu'il est survol\303\251 */\n"
"QPushButton:hover {\n"
"    background-color: #356aa0; /* Bleu plus fonc\303\251 */\n"
"}\n"
"\n"
"/* Style du bouton lorsqu'il est press\303\251 */\n"
"QPushButton:pressed {\n"
"    background-color: #2a5286; /* Bleu encore plus fonc\303\251 */\n"
"}\n"
""));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        pushButtonajouter = new QPushButton(tab_6);
        pushButtonajouter->setObjectName(QStringLiteral("pushButtonajouter"));
        pushButtonajouter->setGeometry(QRect(550, 450, 171, 61));
        pushButtonajouter->setStyleSheet(QLatin1String("font: 10pt Arial ;\n"
"    color:white;\n"
"    background-color :#2da5d5;\n"
"    border-bottom-left-radius: 10px 10px;\n"
"    border-bottom-right-radius: 10px 10px;"));
        layoutWidget = new QWidget(tab_6);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(122, 22, 301, 39));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelcin = new QLabel(layoutWidget);
        labelcin->setObjectName(QStringLiteral("labelcin"));
        labelcin->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelcin);

        lineEditcin = new QLineEdit(layoutWidget);
        lineEditcin->setObjectName(QStringLiteral("lineEditcin"));
        lineEditcin->setStyleSheet(QStringLiteral(""));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditcin);

        layoutWidget_2 = new QWidget(tab_6);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(121, 83, 301, 39));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelnom = new QLabel(layoutWidget_2);
        labelnom->setObjectName(QStringLiteral("labelnom"));
        labelnom->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_2->addWidget(labelnom);

        lineEditnom = new QLineEdit(layoutWidget_2);
        lineEditnom->setObjectName(QStringLiteral("lineEditnom"));
        lineEditnom->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(lineEditnom);

        layoutWidget_3 = new QWidget(tab_6);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(120, 140, 301, 39));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelprenom = new QLabel(layoutWidget_3);
        labelprenom->setObjectName(QStringLiteral("labelprenom"));
        labelprenom->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_3->addWidget(labelprenom);

        lineEditprenom = new QLineEdit(layoutWidget_3);
        lineEditprenom->setObjectName(QStringLiteral("lineEditprenom"));
        lineEditprenom->setStyleSheet(QStringLiteral(""));

        horizontalLayout_3->addWidget(lineEditprenom);

        layoutWidget_4 = new QWidget(tab_6);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(121, 270, 311, 39));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labeladresse = new QLabel(layoutWidget_4);
        labeladresse->setObjectName(QStringLiteral("labeladresse"));
        labeladresse->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_5->addWidget(labeladresse);

        lineEditadresse = new QLineEdit(layoutWidget_4);
        lineEditadresse->setObjectName(QStringLiteral("lineEditadresse"));
        lineEditadresse->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(lineEditadresse);

        layoutWidget_5 = new QWidget(tab_6);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(121, 332, 311, 39));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelemail = new QLabel(layoutWidget_5);
        labelemail->setObjectName(QStringLiteral("labelemail"));
        labelemail->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_6->addWidget(labelemail);

        lineEditemail = new QLineEdit(layoutWidget_5);
        lineEditemail->setObjectName(QStringLiteral("lineEditemail"));
        lineEditemail->setStyleSheet(QStringLiteral(""));

        horizontalLayout_6->addWidget(lineEditemail);

        layoutWidget_6 = new QWidget(tab_6);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(120, 390, 311, 39));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelnumero = new QLabel(layoutWidget_6);
        labelnumero->setObjectName(QStringLiteral("labelnumero"));
        labelnumero->setStyleSheet(QStringLiteral("font:10pt Arial;\\n    color:black;"));

        horizontalLayout_7->addWidget(labelnumero);

        lineEditnumero = new QLineEdit(layoutWidget_6);
        lineEditnumero->setObjectName(QStringLiteral("lineEditnumero"));
        lineEditnumero->setStyleSheet(QStringLiteral(""));

        horizontalLayout_7->addWidget(lineEditnumero);

        layoutWidget_7 = new QWidget(tab_6);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(120, 440, 311, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget_7);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_7);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout->addWidget(label);

        comboBox_5 = new QComboBox(layoutWidget_7);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setStyleSheet(QLatin1String(" border:none;\n"
" \n"
"    font: 11pt Arial;\n"
"                      color:white;\n"
"                      background-color :#2da5d5;\n"
"                      selection-background-color: rgb(254, 120, 126);"));

        horizontalLayout->addWidget(comboBox_5);

        layoutWidget_8 = new QWidget(tab_6);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(120, 200, 322, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labeldate = new QLabel(layoutWidget_8);
        labeldate->setObjectName(QStringLiteral("labeldate"));
        labeldate->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_4->addWidget(labeldate);

        dateEdit_2 = new QDateEdit(layoutWidget_8);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        horizontalLayout_4->addWidget(dateEdit_2);

        tabWidget_4->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        pushButtonsupprimerclient = new QPushButton(tab_7);
        pushButtonsupprimerclient->setObjectName(QStringLiteral("pushButtonsupprimerclient"));
        pushButtonsupprimerclient->setGeometry(QRect(1080, 130, 121, 61));
        pushButtonsupprimerclient->setStyleSheet(QLatin1String("font: 10pt Arial ;\n"
"    color:white;\n"
"    background-color :#2da5d5;\n"
"    border-bottom-left-radius: 10px 10px;\n"
"    border-bottom-right-radius: 10px 10px;"));
        tableView_2 = new QTableView(tab_7);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 50, 1041, 461));
        tableView_2->setStyleSheet(QLatin1String("font: 75 8pt \"MS Shell Dlg 2\";\n"
"border-color: rgb(255, 16, 203);\n"
"gridline-color: rgb(255, 255, 255);\n"
"/*background-color: #d7d6d5*/\n"
""));
        layoutWidget_41 = new QWidget(tab_7);
        layoutWidget_41->setObjectName(QStringLiteral("layoutWidget_41"));
        layoutWidget_41->setGeometry(QRect(1230, 100, 281, 36));
        horizontalLayout_36 = new QHBoxLayout(layoutWidget_41);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(0, 0, 0, 0);
        labelnom_6 = new QLabel(layoutWidget_41);
        labelnom_6->setObjectName(QStringLiteral("labelnom_6"));
        labelnom_6->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_36->addWidget(labelnom_6);

        lineEditnom_6 = new QLineEdit(layoutWidget_41);
        lineEditnom_6->setObjectName(QStringLiteral("lineEditnom_6"));
        lineEditnom_6->setStyleSheet(QStringLiteral(""));

        horizontalLayout_36->addWidget(lineEditnom_6);

        layoutWidget_51 = new QWidget(tab_7);
        layoutWidget_51->setObjectName(QStringLiteral("layoutWidget_51"));
        layoutWidget_51->setGeometry(QRect(1230, 140, 281, 36));
        horizontalLayout_45 = new QHBoxLayout(layoutWidget_51);
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        horizontalLayout_45->setContentsMargins(0, 0, 0, 0);
        labelprenom_7 = new QLabel(layoutWidget_51);
        labelprenom_7->setObjectName(QStringLiteral("labelprenom_7"));
        labelprenom_7->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_45->addWidget(labelprenom_7);

        lineEditprenom_7 = new QLineEdit(layoutWidget_51);
        lineEditprenom_7->setObjectName(QStringLiteral("lineEditprenom_7"));
        lineEditprenom_7->setStyleSheet(QStringLiteral(""));

        horizontalLayout_45->addWidget(lineEditprenom_7);

        layoutWidget_52 = new QWidget(tab_7);
        layoutWidget_52->setObjectName(QStringLiteral("layoutWidget_52"));
        layoutWidget_52->setGeometry(QRect(1230, 180, 281, 36));
        horizontalLayout_46 = new QHBoxLayout(layoutWidget_52);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        horizontalLayout_46->setContentsMargins(0, 0, 0, 0);
        labeldate_7 = new QLabel(layoutWidget_52);
        labeldate_7->setObjectName(QStringLiteral("labeldate_7"));
        labeldate_7->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_46->addWidget(labeldate_7);

        lineEditdate_7 = new QLineEdit(layoutWidget_52);
        lineEditdate_7->setObjectName(QStringLiteral("lineEditdate_7"));
        lineEditdate_7->setStyleSheet(QStringLiteral(""));

        horizontalLayout_46->addWidget(lineEditdate_7);

        layoutWidget_53 = new QWidget(tab_7);
        layoutWidget_53->setObjectName(QStringLiteral("layoutWidget_53"));
        layoutWidget_53->setGeometry(QRect(1230, 240, 281, 36));
        horizontalLayout_47 = new QHBoxLayout(layoutWidget_53);
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        horizontalLayout_47->setContentsMargins(0, 0, 0, 0);
        labeladresse_7 = new QLabel(layoutWidget_53);
        labeladresse_7->setObjectName(QStringLiteral("labeladresse_7"));
        labeladresse_7->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_47->addWidget(labeladresse_7);

        lineEditadresse_7 = new QLineEdit(layoutWidget_53);
        lineEditadresse_7->setObjectName(QStringLiteral("lineEditadresse_7"));
        lineEditadresse_7->setStyleSheet(QStringLiteral(""));

        horizontalLayout_47->addWidget(lineEditadresse_7);

        layoutWidget_54 = new QWidget(tab_7);
        layoutWidget_54->setObjectName(QStringLiteral("layoutWidget_54"));
        layoutWidget_54->setGeometry(QRect(1230, 300, 281, 36));
        horizontalLayout_48 = new QHBoxLayout(layoutWidget_54);
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        horizontalLayout_48->setContentsMargins(0, 0, 0, 0);
        labelemail_7 = new QLabel(layoutWidget_54);
        labelemail_7->setObjectName(QStringLiteral("labelemail_7"));
        labelemail_7->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_48->addWidget(labelemail_7);

        lineEditemail_7 = new QLineEdit(layoutWidget_54);
        lineEditemail_7->setObjectName(QStringLiteral("lineEditemail_7"));
        lineEditemail_7->setStyleSheet(QStringLiteral(""));

        horizontalLayout_48->addWidget(lineEditemail_7);

        layoutWidget_55 = new QWidget(tab_7);
        layoutWidget_55->setObjectName(QStringLiteral("layoutWidget_55"));
        layoutWidget_55->setGeometry(QRect(1230, 350, 281, 36));
        horizontalLayout_49 = new QHBoxLayout(layoutWidget_55);
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        horizontalLayout_49->setContentsMargins(0, 0, 0, 0);
        labelnumero_7 = new QLabel(layoutWidget_55);
        labelnumero_7->setObjectName(QStringLiteral("labelnumero_7"));
        labelnumero_7->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_49->addWidget(labelnumero_7);

        lineEditnumero_7 = new QLineEdit(layoutWidget_55);
        lineEditnumero_7->setObjectName(QStringLiteral("lineEditnumero_7"));
        lineEditnumero_7->setStyleSheet(QStringLiteral(""));

        horizontalLayout_49->addWidget(lineEditnumero_7);

        layoutWidget_56 = new QWidget(tab_7);
        layoutWidget_56->setObjectName(QStringLiteral("layoutWidget_56"));
        layoutWidget_56->setGeometry(QRect(1230, 400, 1090, 38));
        horizontalLayout_50 = new QHBoxLayout(layoutWidget_56);
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        horizontalLayout_50->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_56);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        horizontalLayout_50->addWidget(label_13);

        lineeditsexe_7 = new QLineEdit(layoutWidget_56);
        lineeditsexe_7->setObjectName(QStringLiteral("lineeditsexe_7"));
        lineeditsexe_7->setStyleSheet(QStringLiteral(""));

        horizontalLayout_50->addWidget(lineeditsexe_7);

        pushButton_2 = new QPushButton(tab_7);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1080, 60, 121, 61));
        pushButton_2->setStyleSheet(QLatin1String("font: 10pt Arial ;\n"
"    color:white;\n"
"    background-color :#2da5d5;\n"
"    border-bottom-left-radius: 10px 10px;\n"
"    border-bottom-right-radius: 10px 10px;"));
        layoutWidget_17 = new QWidget(tab_7);
        layoutWidget_17->setObjectName(QStringLiteral("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(1230, 60, 281, 36));
        formLayout_3 = new QFormLayout(layoutWidget_17);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        lineeditcinsup = new QLineEdit(layoutWidget_17);
        lineeditcinsup->setObjectName(QStringLiteral("lineeditcinsup"));
        lineeditcinsup->setStyleSheet(QStringLiteral(""));
        lineeditcinsup->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineeditcinsup);

        labelcin_3 = new QLabel(layoutWidget_17);
        labelcin_3->setObjectName(QStringLiteral("labelcin_3"));
        labelcin_3->setStyleSheet(QLatin1String("font:10pt Arial;\n"
"    color:black;"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, labelcin_3);

        tabWidget_4->addTab(tab_7, QString());

        retranslateUi(gestionclient);

        tabWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestionclient);
    } // setupUi

    void retranslateUi(QDialog *gestionclient)
    {
        gestionclient->setWindowTitle(QApplication::translate("gestionclient", "Dialog", Q_NULLPTR));
        pushButtonajouter->setText(QApplication::translate("gestionclient", "Ajouter", Q_NULLPTR));
        labelcin->setText(QApplication::translate("gestionclient", "CIN : ", Q_NULLPTR));
        labelnom->setText(QApplication::translate("gestionclient", "Nom :", Q_NULLPTR));
        labelprenom->setText(QApplication::translate("gestionclient", "Prenom :", Q_NULLPTR));
        labeladresse->setText(QApplication::translate("gestionclient", "Adresse : ", Q_NULLPTR));
        labelemail->setText(QApplication::translate("gestionclient", "E-mail :", Q_NULLPTR));
        lineEditemail->setPlaceholderText(QString());
        labelnumero->setText(QApplication::translate("gestionclient", "Numero de telephone :", Q_NULLPTR));
        label->setText(QApplication::translate("gestionclient", "sexe :", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("gestionclient", "male", Q_NULLPTR)
         << QApplication::translate("gestionclient", "female", Q_NULLPTR)
        );
        labeldate->setText(QApplication::translate("gestionclient", "Date de naissance : ", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_6), QApplication::translate("gestionclient", "Ajouter client ", Q_NULLPTR));
        pushButtonsupprimerclient->setText(QApplication::translate("gestionclient", "supprimer", Q_NULLPTR));
        labelnom_6->setText(QApplication::translate("gestionclient", "Nom :", Q_NULLPTR));
        labelprenom_7->setText(QApplication::translate("gestionclient", "Prenom :", Q_NULLPTR));
        labeldate_7->setText(QApplication::translate("gestionclient", "Date de naissance : ", Q_NULLPTR));
        labeladresse_7->setText(QApplication::translate("gestionclient", "Adresse : ", Q_NULLPTR));
        labelemail_7->setText(QApplication::translate("gestionclient", "E-mail :", Q_NULLPTR));
        lineEditemail_7->setPlaceholderText(QString());
        labelnumero_7->setText(QApplication::translate("gestionclient", "Numero de telephone :", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestionclient", "sexe :", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestionclient", "modifier", Q_NULLPTR));
        labelcin_3->setText(QApplication::translate("gestionclient", "CIN : ", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_7), QApplication::translate("gestionclient", "affichier client", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestionclient: public Ui_gestionclient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONCLIENT_H
