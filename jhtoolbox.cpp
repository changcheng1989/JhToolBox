#include "jhtoolbox.h"
#include <QTextCodec>
JhToolBox::JhToolBox(QWidget *parent) :
    QToolBox(parent)
{



    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8")) ;








    QGroupBox *groupBox1 = new QGroupBox();
    toolButton1_1 = new QToolButton( );
    toolButton1_1->setText(tr("不良图像检测"));
    toolButton1_1->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");



    toolButton1_2 = new QToolButton();
    toolButton1_2->setText( tr( "参数设置" ) );
    //toolButton1_2->setAutoRaise( TRUE );
    //toolButton1_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    toolButton1_2->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");

    QVBoxLayout *layout1 = new QVBoxLayout(groupBox1);
    layout1->setMargin(10);
    layout1->setAlignment(Qt::AlignHCenter);
    layout1->addWidget(toolButton1_1);
    layout1->addWidget(toolButton1_2);

    layout1->addStretch();

    QGroupBox *groupBox2 = new QGroupBox();

    toolButton2_1 = new QToolButton( );
    toolButton2_1->setText( tr( "人脸检测" ) );
    //toolButton2_1->setAutoRaise( TRUE );
    //toolButton2_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);
    toolButton2_1->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    toolButton2_2 = new QToolButton();
    toolButton2_2->setText( tr( "参数设置" ) );
    toolButton2_2->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    //toolButton2_2->setAutoRaise( TRUE );
    //toolButton2_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout2 = new QVBoxLayout(groupBox2);
    layout2->setMargin(10);
    layout2->setAlignment(Qt::AlignHCenter);
    layout2->addWidget(toolButton2_1);
    layout2->addWidget(toolButton2_2);
    layout2->addStretch();

    QGroupBox *groupBox3 = new QGroupBox();

    toolButton3_1 = new QToolButton( );
    toolButton3_1->setText( tr( "文字图像检测" ) );
    toolButton3_1->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    //toolButton3_1->setAutoRaise( TRUE );
    //toolButton3_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    toolButton3_2 = new QToolButton();
    toolButton3_2->setText( tr( "参数设置" ) );
    toolButton3_2->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    //toolButton3_2->setAutoRaise( TRUE );
    //toolButton3_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout3 = new QVBoxLayout(groupBox3);


    layout3->setMargin(10);
    layout3->setAlignment(Qt::AlignHCenter);
    layout3->addWidget(toolButton3_1);
    layout3->addWidget(toolButton3_2);
    layout3->addStretch();




    QGroupBox *groupBox4 = new QGroupBox();

    toolButton4_1 = new QToolButton( );
    toolButton4_1->setText( tr( "图像比对" ) );
    //toolButton4_1->setAutoRaise( TRUE );
    //toolButton4_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);
    toolButton4_1->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    toolButton4_2 = new QToolButton();
    toolButton4_2->setText( tr( "参数设置" ) );
    //toolButton4_2->setAutoRaise( TRUE );
    //toolButton4_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);
    toolButton4_2->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");

    toolButton4_3 = new QToolButton();
    toolButton4_3->setText( tr( "样本库索引" ) );
    toolButton4_3->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    //toolButton4_3->setAutoRaise( TRUE );
    //toolButton4_3->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);

    QVBoxLayout *layout4 = new QVBoxLayout(groupBox4);


    layout4->setMargin(10);
    layout4->setAlignment(Qt::AlignHCenter);
    layout4->addWidget(toolButton4_1);
    layout4->addWidget(toolButton4_2);
    layout4->addWidget(toolButton4_3);
    layout4->addStretch();


    QGroupBox *groupBox5 = new QGroupBox();

    toolButton5_1 = new QToolButton( );
    toolButton5_1->setText( tr( "身份证识别" ) );
    //toolButton5_1->setAutoRaise( TRUE );
    //toolButton5_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);
    toolButton5_1->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    toolButton5_2 = new QToolButton();
    toolButton5_2->setText( tr( "参数设置" ) );
    //toolButton5_2->setAutoRaise( TRUE );
    //toolButton5_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);
    toolButton5_2->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");


    QVBoxLayout *layout5 = new QVBoxLayout(groupBox5);


    layout5->setMargin(10);
    layout5->setAlignment(Qt::AlignHCenter);
    layout5->addWidget(toolButton5_1);
    layout5->addWidget(toolButton5_2);
    layout5->addStretch();


    QGroupBox *groupBox6 = new QGroupBox();

    toolButton6_1 = new QToolButton( );
    toolButton6_1->setText( tr( "身份证识别" ) );
    //toolButton6_1->setAutoRaise( TRUE );
    //toolButton6_1->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);
    toolButton6_1->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");
    toolButton6_2 = new QToolButton();
    toolButton6_2->setText( tr( "参数设置" ) );
    //toolButton6_2->setAutoRaise( TRUE );
    //toolButton6_2->setToolButtonStyle( Qt::ToolButtonTextUnderIcon);
    toolButton6_2->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;");


    QVBoxLayout *layout6 = new QVBoxLayout(groupBox6);


    layout6->setMargin(10);
    layout6->setAlignment(Qt::AlignHCenter);
    layout6->addWidget(toolButton6_1);
    layout6->addWidget(toolButton6_2);
    layout6->addStretch();




    this->addItem( ( QWidget* )groupBox1 , tr("不良图像检测" ));
    this->addItem( ( QWidget* )groupBox2 , tr("人脸检测" ));
    this->addItem( ( QWidget* )groupBox3 , tr("文字图像检测" ));
    this->addItem( ( QWidget* )groupBox4 , tr("图像比对" ));
    this->addItem( ( QWidget* )groupBox5 , tr("违法标致检测" ));
    this->addItem( ( QWidget* )groupBox6 , tr("身份证识别" ));
}
