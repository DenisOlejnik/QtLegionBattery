find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_wrap_ui(UI_HEADERS
    mainwindow.ui
)

add_library(battery_gui
    STATIC
        mainwindow.h mainwindow.cpp

    ${UI_HEADERS}
)

target_include_directories(battery_gui PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(battery_gui
    PUBLIC
        Qt::Gui Qt::Widgets
)
