/********************************************************************************
** Form generated from reading UI file 'myclass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCLASS_H
#define UI_MYCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyClassClass
{
public:
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_1;
    QVBoxLayout *verticalLayout_MainWnd;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_Title;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_1;
    QLineEdit *lineEdit_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *lineEdit_14;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *lineEdit_15;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_1_Exit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2_Reset;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_3_Confrim;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_1;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MyClassClass)
    {
        if (MyClassClass->objectName().isEmpty())
            MyClassClass->setObjectName(QStringLiteral("MyClassClass"));
        MyClassClass->resize(866, 887);
        horizontalLayout_3 = new QHBoxLayout(MyClassClass);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        scrollArea = new QScrollArea(MyClassClass);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 829, 1075));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_1 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1);

        verticalLayout_MainWnd = new QVBoxLayout();
        verticalLayout_MainWnd->setSpacing(6);
        verticalLayout_MainWnd->setObjectName(QStringLiteral("verticalLayout_MainWnd"));
        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_MainWnd->addItem(verticalSpacer_2);

        label_Title = new QLabel(scrollAreaWidgetContents);
        label_Title->setObjectName(QStringLiteral("label_Title"));
        label_Title->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        label_Title->setAlignment(Qt::AlignCenter);

        verticalLayout_MainWnd->addWidget(label_Title);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_MainWnd->addItem(verticalSpacer_3);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(6);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        label_1 = new QLabel(scrollAreaWidgetContents);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);
        label_1->setMinimumSize(QSize(300, 40));
        label_1->setMaximumSize(QSize(300, 40));
        label_1->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_1->addWidget(label_1);

        lineEdit_1 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_1->sizePolicy().hasHeightForWidth());
        lineEdit_1->setSizePolicy(sizePolicy1);
        lineEdit_1->setMinimumSize(QSize(300, 30));
        lineEdit_1->setMaximumSize(QSize(300, 30));
        lineEdit_1->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_1->addWidget(lineEdit_1);


        verticalLayout_MainWnd->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(200);
        sizePolicy2.setVerticalStretch(40);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(300, 40));
        label_2->setMaximumSize(QSize(300, 40));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(200);
        sizePolicy3.setVerticalStretch(30);
        sizePolicy3.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy3);
        lineEdit_2->setMinimumSize(QSize(300, 30));
        lineEdit_2->setMaximumSize(QSize(300, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout_MainWnd->addLayout(horizontalLayout_2);

        horizontalLayout3 = new QHBoxLayout();
        horizontalLayout3->setSpacing(6);
        horizontalLayout3->setObjectName(QStringLiteral("horizontalLayout3"));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(300, 40));
        label_3->setMaximumSize(QSize(300, 40));
        label_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(300, 30));
        lineEdit_3->setMaximumSize(QSize(300, 30));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout3->addWidget(lineEdit_3);


        verticalLayout_MainWnd->addLayout(horizontalLayout3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(300, 40));
        label_4->setMaximumSize(QSize(300, 40));
        label_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(300, 30));
        lineEdit_4->setMaximumSize(QSize(300, 30));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout_MainWnd->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setMinimumSize(QSize(300, 40));
        label_5->setMaximumSize(QSize(300, 40));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(300, 30));
        lineEdit_5->setMaximumSize(QSize(300, 30));
        lineEdit_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout_MainWnd->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(30);
        sizePolicy5.setVerticalStretch(40);
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setMinimumSize(QSize(300, 40));
        label_6->setMaximumSize(QSize(200, 40));
        label_6->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_6 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(300, 30));
        lineEdit_6->setMaximumSize(QSize(300, 30));
        lineEdit_6->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout_MainWnd->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(300, 40));
        label_7->setMaximumSize(QSize(300, 40));
        label_7->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_7 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(300, 30));
        lineEdit_7->setMaximumSize(QSize(300, 30));
        lineEdit_7->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout_MainWnd->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(300, 40));
        label_8->setMaximumSize(QSize(300, 40));
        label_8->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_8 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(300, 30));
        lineEdit_8->setMaximumSize(QSize(300, 30));
        lineEdit_8->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout_MainWnd->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(300, 40));
        label_9->setMaximumSize(QSize(300, 40));
        label_9->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_9 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(300, 30));
        lineEdit_9->setMaximumSize(QSize(300, 30));
        lineEdit_9->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_9->addWidget(lineEdit_9);


        verticalLayout_MainWnd->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(300, 40));
        label_10->setMaximumSize(QSize(300, 40));
        label_10->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_10 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(300, 30));
        lineEdit_10->setMaximumSize(QSize(300, 30));
        lineEdit_10->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_10->addWidget(lineEdit_10);


        verticalLayout_MainWnd->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(300, 40));
        label_11->setMaximumSize(QSize(300, 40));
        label_11->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_11 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(300, 30));
        lineEdit_11->setMaximumSize(QSize(300, 30));
        lineEdit_11->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_11->addWidget(lineEdit_11);


        verticalLayout_MainWnd->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(300, 40));
        label_12->setMaximumSize(QSize(300, 40));
        label_12->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_12->addWidget(label_12);

        lineEdit_12 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(300, 30));
        lineEdit_12->setMaximumSize(QSize(300, 30));
        lineEdit_12->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_12->addWidget(lineEdit_12);


        verticalLayout_MainWnd->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(300, 40));
        label_13->setMaximumSize(QSize(300, 40));
        label_13->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_13->addWidget(label_13);

        lineEdit_13 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setMinimumSize(QSize(300, 30));
        lineEdit_13->setMaximumSize(QSize(300, 30));
        lineEdit_13->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_13->addWidget(lineEdit_13);


        verticalLayout_MainWnd->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(300, 40));
        label_14->setMaximumSize(QSize(300, 40));
        label_14->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_14->addWidget(label_14);

        lineEdit_14 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setMinimumSize(QSize(300, 30));
        lineEdit_14->setMaximumSize(QSize(300, 30));
        lineEdit_14->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_14->addWidget(lineEdit_14);


        verticalLayout_MainWnd->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(300, 40));
        label_15->setMaximumSize(QSize(300, 40));
        label_15->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_15->addWidget(label_15);

        lineEdit_15 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setMinimumSize(QSize(300, 30));
        lineEdit_15->setMaximumSize(QSize(300, 30));
        lineEdit_15->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_15->addWidget(lineEdit_15);


        verticalLayout_MainWnd->addLayout(horizontalLayout_15);

        verticalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_MainWnd->addItem(verticalSpacer_4);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_3);

        pushButton_1_Exit = new QPushButton(scrollAreaWidgetContents);
        pushButton_1_Exit->setObjectName(QStringLiteral("pushButton_1_Exit"));
        pushButton_1_Exit->setMinimumSize(QSize(100, 30));
        pushButton_1_Exit->setMaximumSize(QSize(100, 30));
        pushButton_1_Exit->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_16->addWidget(pushButton_1_Exit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_4);

        pushButton_2_Reset = new QPushButton(scrollAreaWidgetContents);
        pushButton_2_Reset->setObjectName(QStringLiteral("pushButton_2_Reset"));
        pushButton_2_Reset->setMinimumSize(QSize(100, 30));
        pushButton_2_Reset->setMaximumSize(QSize(100, 30));
        pushButton_2_Reset->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_16->addWidget(pushButton_2_Reset);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);

        pushButton_3_Confrim = new QPushButton(scrollAreaWidgetContents);
        pushButton_3_Confrim->setObjectName(QStringLiteral("pushButton_3_Confrim"));
        pushButton_3_Confrim->setMinimumSize(QSize(100, 30));
        pushButton_3_Confrim->setMaximumSize(QSize(100, 30));
        pushButton_3_Confrim->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));

        horizontalLayout_16->addWidget(pushButton_3_Confrim);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_6);


        verticalLayout_MainWnd->addLayout(horizontalLayout_16);

        verticalSpacer_5 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_MainWnd->addItem(verticalSpacer_5);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_MainWnd->addItem(verticalSpacer_1);


        horizontalLayout->addLayout(verticalLayout_MainWnd);

        horizontalSpacer_2 = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_3->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, lineEdit_1);
        QWidget::setTabOrder(lineEdit_1, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, lineEdit_15);
        QWidget::setTabOrder(lineEdit_15, pushButton_1_Exit);
        QWidget::setTabOrder(pushButton_1_Exit, pushButton_2_Reset);
        QWidget::setTabOrder(pushButton_2_Reset, pushButton_3_Confrim);

        retranslateUi(MyClassClass);
        QObject::connect(pushButton_1_Exit, SIGNAL(clicked()), MyClassClass, SLOT(close()));

        QMetaObject::connectSlotsByName(MyClassClass);
    } // setupUi

    void retranslateUi(QWidget *MyClassClass)
    {
        MyClassClass->setWindowTitle(QApplication::translate("MyClassClass", "MyClass", Q_NULLPTR));
        label_Title->setText(QApplication::translate("MyClassClass", "\345\210\266\344\275\234\350\256\276\345\244\207\350\265\204\346\272\220\345\214\205", Q_NULLPTR));
        label_1->setText(QApplication::translate("MyClassClass", "\350\256\276\345\244\207\346\216\245\345\205\245\345\215\217\350\256\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("MyClassClass", "\346\225\260\346\215\256\346\216\245\345\205\245\345\215\217\350\256\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MyClassClass", "\345\216\202\345\225\206\344\270\255\346\226\207\345\220\215\347\247\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("MyClassClass", "\345\216\202\345\225\206\350\213\261\346\226\207\345\220\215\347\247\260", Q_NULLPTR));
        label_5->setText(QApplication::translate("MyClassClass", "\350\247\206\351\242\221\347\261\273\350\217\234\345\215\225\345\257\271\345\272\224\347\232\204\350\256\276\345\244\207\346\216\245\345\205\245\345\215\217\350\256\256", Q_NULLPTR));
        label_6->setText(QApplication::translate("MyClassClass", "\346\212\245\350\255\246\347\261\273\350\217\234\345\215\225\345\257\271\345\272\224\347\232\204\350\256\276\345\244\207\346\216\245\345\205\245\345\215\217\350\256\256", Q_NULLPTR));
        label_7->setText(QApplication::translate("MyClassClass", "\344\272\272\350\257\201\350\217\234\345\215\225\345\257\271\345\272\224\347\232\204\350\256\276\345\244\207\346\216\245\345\205\245\345\215\217\350\256\256", Q_NULLPTR));
        label_8->setText(QApplication::translate("MyClassClass", "\350\256\276\345\244\207\346\216\245\345\205\245\345\215\217\350\256\256\345\257\271\345\272\224\344\270\255\346\226\207\345\220\215\347\247\260", Q_NULLPTR));
        label_9->setText(QApplication::translate("MyClassClass", "\350\247\243\347\240\201\346\240\207\347\255\276\345\257\271\345\272\224\347\274\226\347\240\201", Q_NULLPTR));
        label_10->setText(QApplication::translate("MyClassClass", "\350\203\275\345\212\233\351\233\206\345\257\271\345\272\224\347\232\204\347\274\226\347\240\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("MyClassClass", "\350\203\275\345\212\233\351\233\206\345\257\271\345\272\224\347\232\204\345\220\215\347\247\260", Q_NULLPTR));
        label_12->setText(QApplication::translate("MyClassClass", "\346\225\260\346\215\256\346\216\245\345\205\245\345\215\217\350\256\256\345\257\271\345\272\224\347\232\204\345\220\215\347\247\260", Q_NULLPTR));
        label_13->setText(QApplication::translate("MyClassClass", "\346\225\260\346\215\256\346\216\245\345\205\245\345\215\217\350\256\256\350\213\261\346\226\207\345\220\215\347\247\260", Q_NULLPTR));
        label_14->setText(QApplication::translate("MyClassClass", "\350\203\275\345\212\233\351\233\206\346\267\273\345\212\240\347\232\204\350\213\261\346\226\207\345\220\215\347\247\260", Q_NULLPTR));
        label_15->setText(QApplication::translate("MyClassClass", "\346\230\257\345\220\246\344\270\272\344\270\273\345\212\250\350\256\276\345\244\207", Q_NULLPTR));
        pushButton_1_Exit->setText(QApplication::translate("MyClassClass", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_2_Reset->setText(QApplication::translate("MyClassClass", "\346\270\205\347\251\272", Q_NULLPTR));
        pushButton_3_Confrim->setText(QApplication::translate("MyClassClass", "\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyClassClass: public Ui_MyClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCLASS_H
