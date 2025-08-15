cmake_minimum_required(VERSION 3.22)
project(CameraSensorDashboard VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(Qt6 REQUIRED COMPONENTS Core Quick QuickControls2 Charts Multimedia)
find_package(OpenCV REQUIRED)

# Qt6 automatic MOC, UIC, RCC processing
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Source files
set(SOURCES
    src/main.cpp
    src/CameraCapture.cpp
    src/SensorDataGenerator.cpp
    src/DataLogger.cpp
    src/PlaybackController.cpp
    src/ImageProvider.cpp
)

# Header files
set(HEADERS
    include/CameraCapture.h
    include/SensorDataGenerator.h
    include/DataLogger.h
    include/PlaybackController.h
    include/ImageProvider.h
)

# QML resources
set(CMAKE_AUTORCC ON)
qt6_add_resources(QML_RESOURCES qml/qml.qrc)

# Create executable
qt6_add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${QML_RESOURCES})

# Include directories
target_include_directories(${PROJECT_NAME} PRIVATE 
    include
    ${OpenCV_INCLUDE_DIRS}
)

# Link libraries
target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Core
    Qt6::Quick
    Qt6::QuickControls2
    Qt6::Charts
    Qt6::Multimedia
    ${OpenCV_LIBS}
)

# Set target properties
set_target_properties(${PROJECT_NAME} PROPERTIES
    WIN32_EXECUTABLE TRUE
    MACOSX_BUNDLE TRUE
)

# Create data directory if it doesn't exist
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/data)
