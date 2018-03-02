#ifndef P_MAKEFILE_H
#define P_MAKEFILE_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include "project_data.h"
#include "singleton.h"

class p_makefile : public QWidget, public Singleton<p_makefile> {
    friend class Singleton<p_makefile>;

    Q_OBJECT
public:
    QString get_makefile();
    void    save_changes();
    void    revert_changes();

public slots:
    QString generate_makefile();
    void    emit_changes();

signals:
    void    changes_made(QWidget*, bool);

private:
    p_makefile(QWidget* parent = 0);
    p_makefile(const p_makefile&);
    virtual ~p_makefile();

    QPushButton*    btn_generate;
    QTextEdit*      te_text_area;
    QString         makefile;
    QVBoxLayout*    mainlayout;
};

#endif // P_MAKEFILE_H
