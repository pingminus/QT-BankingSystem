cmake_minimum_required(VERSION 3.16)

project(BankingSystem VERSION 0.1 LANGUAGES CXX)

# Enable Qt automatic features
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find Qt
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# Create executable (Qt 6 or Qt 5)
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(BankingSystem
        MANUAL_FINALIZATION

        # C++ sources
        main.cpp
        src/mainwindow.cpp
        src/dashboardwindow.cpp

        #Python scripts
        scripts/simulatedBTCPrice.py
        scripts/getBTCPrice.py

        # Headers
        include/mainwindow.h
        include/dashboardwindow.h

        # UI forms
        forms/mainwindow.ui
        forms/dashboardwindow.ui

        # Qt resource file
        resources/resources.qrc
    )
else()
    if(ANDROID)
        add_library(BankingSystem SHARED
            main.cpp
            src/mainwindow.cpp
            src/dashboardwindow.cpp
            include/mainwindow.h
            include/dashboardwindow.h
            forms/mainwindow.ui
            forms/dashboardwindow.ui
            resources/resources.qrc
        )
    else()
        add_executable(BankingSystem
            main.cpp
            src/mainwindow.cpp
            src/dashboardwindow.cpp
            include/mainwindow.h
            include/dashboardwindow.h
            forms/mainwindow.ui
            forms/dashboardwindow.ui
            resources.qrc
        )
    endif()
endif()

# Include your custom headers
target_include_directories(BankingSystem PRIVATE include)

# Link Qt libraries
target_link_libraries(BankingSystem PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# macOS/iOS Bundle ID (optional)
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.BankingSystem)
endif()

# App properties (for macOS/Windows bundle)
set_target_properties(BankingSystem PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Install rules
include(GNUInstallDirs)
install(TARGETS BankingSystem
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Qt 6: finalize build
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(BankingSystem)
endif()

