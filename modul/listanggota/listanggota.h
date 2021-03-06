#ifndef LISTANGGOTA_H
#define LISTANGGOTA_H

#include <QDialog>

namespace Ui {
class ListAnggota;
}

//class QStandardItemModel;
class QSqlTableModel;

class ListAnggota : public QDialog
{
    Q_OBJECT

public:
    explicit ListAnggota(QWidget *parent = 0);
    ~ListAnggota();

private slots:
    void on_btnAgtBtl_clicked();
    void on_bAgtSimpan_clicked();
    void on_btnCari_clicked();

private:
    Ui::ListAnggota *ui;

    QString noAnggota, namaAnggota, kelasAnggota, jurusanAnggota;
    QSqlTableModel *modelAnggota;
};

#endif // LISTANGGOTA_H
