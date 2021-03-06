#ifndef ENTITIES_ATTRIBUTES_PANEL_H
#define ENTITIES_ATTRIBUTES_PANEL_H

#include <list>
#include <QMenu>
#include <QAction>
#include <QWidget>
#include <QListView>
#include <QJsonArray>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QJsonObject>
#include <QJsonDocument>
#include <QStandardItemModel>

class attribute;

class entities_attributes_panel : public QWidget {
    Q_OBJECT
public:
    entities_attributes_panel(QWidget* parent = 0);
    ~entities_attributes_panel();

    QString     select_entity();
    QWidget*    get_entities_panel();
    QWidget*    get_attributes_panel();
    bool        check_entity(QString entity);
    QString     get_entity_name(int id);
    QStringList get_entities_names();

    QString     getCode();
    bool        load(const QJsonArray& entites);
    void        save();

public slots:
    // ATTRIBUTES
    void showMenu();
    void handle_actions(QAction*);
    void remove_attribute(attribute* attr);
    void change_scroll_perspective(Qt::DockWidgetArea np);

    // ENTITIES
    void update_current_index(QModelIndex index);
    void remove_entity();
    void new_entity();

protected slots:
    void update_what_is_visible();

protected:
    // ENTITIES
    int  new_clear_entity(QString name);    // Entity without properties

    QWidget*        entities_widget;
    QPushButton*    btn_new_entity;
    QPushButton*    btn_delete_entity;

    QVBoxLayout*    lay_entities_layout;
    QVBoxLayout*    lay_btn;

    QListView*          lv_list;
    QStandardItemModel* entities_model;
    QModelIndex         current_entity;

    // ATTRIBUTES
    QScrollArea*    scroll_area;

    void add_attribute(attribute* attr);
    void add_attribute(int id, attribute* attr); // pour new_entity()
    std::list<attribute*> list_all_attributes(int id);
    void remove_all_attributes(int entity_id);

    QWidget*        attributes_widget;

    QPushButton*    btn_new_attribute;
    QGridLayout*    lay_attr_layout;

    // Menu
    QMenu*      m_choose_attribute;
    QAction*    a_physics;
    QAction*    a_graphic_renderer;
    QAction*    a_destructor;
    QAction*    a_controls;
    QAction*    a_spawner;

    std::list<attribute*>   attr_list;
};

#endif // ENTITIES_ATTRIBUTES_PANEL_H
