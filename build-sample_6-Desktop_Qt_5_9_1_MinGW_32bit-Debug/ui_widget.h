/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *line_num;
    QPushButton *btn_cal;
    QLineEdit *line_tot;
    QLabel *label_tot;
    QLabel *label_num;
    QLineEdit *line_pri;
    QLabel *label_pri;
    QGridLayout *gridLayout;
    QPushButton *btn_D;
    QLineEdit *line_Dec;
    QLabel *label_B;
    QPushButton *btn_B;
    QLineEdit *line_Hex;
    QLabel *label_D;
    QLabel *label_H;
    QPushButton *btn_H;
    QLineEdit *line_Bin;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(389, 321);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        line_num = new QLineEdit(Widget);
        line_num->setObjectName(QStringLiteral("line_num"));

        gridLayout_2->addWidget(line_num, 0, 1, 1, 1);

        btn_cal = new QPushButton(Widget);
        btn_cal->setObjectName(QStringLiteral("btn_cal"));

        gridLayout_2->addWidget(btn_cal, 1, 1, 1, 1);

        line_tot = new QLineEdit(Widget);
        line_tot->setObjectName(QStringLiteral("line_tot"));

        gridLayout_2->addWidget(line_tot, 1, 3, 1, 1);

        label_tot = new QLabel(Widget);
        label_tot->setObjectName(QStringLiteral("label_tot"));
        QFont font;
        font.setPointSize(11);
        label_tot->setFont(font);

        gridLayout_2->addWidget(label_tot, 1, 2, 1, 1);

        label_num = new QLabel(Widget);
        label_num->setObjectName(QStringLiteral("label_num"));
        label_num->setFont(font);

        gridLayout_2->addWidget(label_num, 0, 0, 1, 1);

        line_pri = new QLineEdit(Widget);
        line_pri->setObjectName(QStringLiteral("line_pri"));

        gridLayout_2->addWidget(line_pri, 0, 3, 1, 1);

        label_pri = new QLabel(Widget);
        label_pri->setObjectName(QStringLiteral("label_pri"));
        label_pri->setFont(font);

        gridLayout_2->addWidget(label_pri, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 5);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_D = new QPushButton(Widget);
        btn_D->setObjectName(QStringLiteral("btn_D"));

        gridLayout->addWidget(btn_D, 0, 2, 1, 1);

        line_Dec = new QLineEdit(Widget);
        line_Dec->setObjectName(QStringLiteral("line_Dec"));

        gridLayout->addWidget(line_Dec, 0, 1, 1, 1);

        label_B = new QLabel(Widget);
        label_B->setObjectName(QStringLiteral("label_B"));
        label_B->setFont(font);

        gridLayout->addWidget(label_B, 1, 0, 1, 1);

        btn_B = new QPushButton(Widget);
        btn_B->setObjectName(QStringLiteral("btn_B"));

        gridLayout->addWidget(btn_B, 1, 2, 1, 1);

        line_Hex = new QLineEdit(Widget);
        line_Hex->setObjectName(QStringLiteral("line_Hex"));

        gridLayout->addWidget(line_Hex, 2, 1, 1, 1);

        label_D = new QLabel(Widget);
        label_D->setObjectName(QStringLiteral("label_D"));
        label_D->setFont(font);

        gridLayout->addWidget(label_D, 0, 0, 1, 1);

        label_H = new QLabel(Widget);
        label_H->setObjectName(QStringLiteral("label_H"));
        label_H->setFont(font);

        gridLayout->addWidget(label_H, 2, 0, 1, 1);

        btn_H = new QPushButton(Widget);
        btn_H->setObjectName(QStringLiteral("btn_H"));

        gridLayout->addWidget(btn_H, 2, 2, 1, 1);

        line_Bin = new QLineEdit(Widget);
        line_Bin->setObjectName(QStringLiteral("line_Bin"));

        gridLayout->addWidget(line_Bin, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 3, 0, 1, 5);

        verticalSpacer_4 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 2, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 2, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 4, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 4, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 4, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        line_num->setText(QApplication::translate("Widget", "12", Q_NULLPTR));
        btn_cal->setText(QApplication::translate("Widget", "Calculate", Q_NULLPTR));
        label_tot->setText(QApplication::translate("Widget", "Total:", Q_NULLPTR));
        label_num->setText(QApplication::translate("Widget", "Num:", Q_NULLPTR));
        line_pri->setText(QApplication::translate("Widget", "5.3", Q_NULLPTR));
        label_pri->setText(QApplication::translate("Widget", "Price:", Q_NULLPTR));
        btn_D->setText(QApplication::translate("Widget", "Change_D", Q_NULLPTR));
        label_B->setText(QApplication::translate("Widget", "Binary:", Q_NULLPTR));
        btn_B->setText(QApplication::translate("Widget", "Change_B", Q_NULLPTR));
        label_D->setText(QApplication::translate("Widget", "Decimal:", Q_NULLPTR));
        label_H->setText(QApplication::translate("Widget", "Hexade:", Q_NULLPTR));
        btn_H->setText(QApplication::translate("Widget", "Change_H", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
