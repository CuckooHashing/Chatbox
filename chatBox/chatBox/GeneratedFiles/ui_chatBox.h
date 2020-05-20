/********************************************************************************
** Form generated from reading UI file 'chatBox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATBOX_H
#define UI_CHATBOX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatBoxClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *chatBar;
    QPushButton *sendButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *chatBoxClass)
    {
        if (chatBoxClass->objectName().isEmpty())
            chatBoxClass->setObjectName(QString::fromUtf8("chatBoxClass"));
        chatBoxClass->resize(600, 589);
        centralWidget = new QWidget(chatBoxClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        chatBar = new QLineEdit(centralWidget);
        chatBar->setObjectName(QString::fromUtf8("chatBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chatBar->sizePolicy().hasHeightForWidth());
        chatBar->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(chatBar);

        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Pictures/New Canvas.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon);
        sendButton->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);

        chatBoxClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(chatBoxClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        chatBoxClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(chatBoxClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        chatBoxClass->setStatusBar(statusBar);

        retranslateUi(chatBoxClass);

        QMetaObject::connectSlotsByName(chatBoxClass);
    } // setupUi

    void retranslateUi(QMainWindow *chatBoxClass)
    {
        chatBoxClass->setWindowTitle(QApplication::translate("chatBoxClass", "chatBox", nullptr));
        sendButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chatBoxClass: public Ui_chatBoxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATBOX_H
