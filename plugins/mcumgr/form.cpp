#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_btn_FS_Local_clicked()
{

}

void Form::on_btn_FS_Go_clicked()
{

}

void Form::on_radio_FS_Upload_clicked()
{

}

void Form::on_radio_FS_Download_clicked()
{

}

void Form::on_radio_FS_Size_clicked()
{

}

void Form::on_radio_FS_HashChecksum_clicked()
{

}

void Form::on_btn_IMG_Local_clicked()
{

}

void Form::on_btn_IMG_Go_clicked()
{

}

void Form::on_radio_IMG_No_Action_toggled(bool checked)
{

}

void Form::on_btn_IMG_Preview_Copy_clicked()
{

}

void Form::on_btn_OS_Go_clicked()
{

}

void Form::on_btn_SHELL_Go_clicked()
{

}

void Form::on_btn_STAT_Go_clicked()
{

}

void Form::on_btn_SHELL_Clear_clicked()
{

}

void Form::on_btn_SHELL_Copy_clicked()
{

}

void Form::on_colview_IMG_Images_updatePreviewWidget(const QModelIndex &index)
{

}

void Form::on_radio_transport_uart_toggled(bool checked)
{

}

void Form::on_radio_transport_udp_toggled(bool checked)
{

}

void Form::on_radio_transport_bluetooth_toggled(bool checked)
{

}

void Form::on_radio_OS_Buffer_Info_toggled(bool checked)
{

}

void Form::on_radio_OS_uname_toggled(bool checked)
{

}

void Form::on_radio_IMG_Get_toggled(bool checked)
{

}

void Form::on_radio_IMG_Set_toggled(bool checked)
{

}

