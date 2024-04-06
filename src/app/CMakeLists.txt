add_executable(battery_app)

target_sources(battery_app
    PRIVATE
        main.cpp
)

target_link_libraries(battery_app PRIVATE battery_gui)

install(TARGETS battery_app
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    BUNDLE DESTINATION .
    COMPONENT runtime
)
