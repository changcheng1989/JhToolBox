#ifndef JHTOOLBOX_H
#define JHTOOLBOX_H

#include <QToolBox>
#include <QtGui/QToolBox>
#include <QToolBox>
#include <QToolButton>
#include <QGroupBox>
#include <QLayout>
#include <QToolButton>
#include <QBitmap>
#include <QGraphicsOpacityEffect>


class JhToolBox : public QToolBox
{
    Q_OBJECT

public:
    JhToolBox(QWidget *parent = 0);


    QToolButton *toolButton1_1;
    QToolButton *toolButton1_2;

    QToolButton *toolButton2_1;
    QToolButton *toolButton2_2;

    QToolButton *toolButton3_1;
    QToolButton *toolButton3_2;

    QToolButton *toolButton4_1;
    QToolButton *toolButton4_2;
    QToolButton *toolButton4_3;

    QToolButton *toolButton5_1;
    QToolButton *toolButton5_2;

    QToolButton *toolButton6_1;
    QToolButton *toolButton6_2;


};

#endif
