#ifndef ATTR_CONTROLS_H
#define ATTR_CONTROLS_H

#include <QDoubleValidator>
#include <QLineEdit>
#include "attribute.h"

class attr_controls : public attribute {
public:
    attr_controls(entities_attributes_panel*);
    ~attr_controls();

    virtual bool load(const QJsonObject& json);
    virtual QJsonObject save();

    virtual QString getCode();
    virtual bool verify_validity();

private:
    QLabel*         lbl_move_speed;
    QLineEdit*      le_move_speed;
    QHBoxLayout*    lay_move_speed;
};

#endif // ATTR_CONTROLS_H
