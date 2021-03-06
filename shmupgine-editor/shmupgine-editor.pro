SOURCES += \
    main.cpp \
    project_data.cpp \
    w_new_project.cpp \
    w_editor.cpp \
    p_config_panel.cpp \
    attribute.cpp \
    entities_attributes_panel.cpp \
    attr_properties.cpp \
    attr_controls.cpp \
    attr_destructor.cpp \
    attr_graphic_renderer.cpp \
    attr_physics.cpp \
    select_window.cpp \
    p_graphics_manager.cpp \
    p_entities_collection.cpp \
    p_entities_editor.cpp \
    w_ressources.cpp \
    attr_spawner.cpp \
    p_groups.cpp \
    w_config_window.cpp \
    spawnslot.cpp \
    p_makefile.cpp \
    p_sounds.cpp \
    w_build.cpp \
    add_audio_window.cpp \
    add_image_window.cpp

HEADERS += \
    project_data.h \
    singleton.h \
    w_new_project.h \
    w_editor.h \
    p_config_panel.h \
    windows_panels.h \
    attribute.h \
    entities_attributes_panel.h \
    attr_properties.h \
    attr_controls.h \
    attr_destructor.h \
    attr_graphic_renderer.h \
    attr_physics.h \
    attributes.h \
    select_window.h \
    w_entities_collection.h \
    p_graphics_manager.h \
    p_entities_collection.h \
    p_entities_editor.h \
    w_ressources.h \
    attr_spawner.h \
    p_groups.h \
    w_config_window.h \
    spawnslot.h \
    p_makefile.h \
    p_sounds.h \
    w_build.h \
    add_audio_window.h \
    add_image_window.h

QT += widgets \
    multimedia

RESOURCES += \
    shmupgine-editor.qrc
