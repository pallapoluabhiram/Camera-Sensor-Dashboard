#!/bin/bash

# Camera Sensor Dashboard - Run Script
# This script builds and runs the Camera Sensor Dashboard application

echo "Camera Sensor Dashboard - Enhanced Version"
echo "==========================================="
echo "New features implemented:"
echo "✓ CSV data logging every second with timestamps"
echo "✓ Camera frame capture every 5 seconds"
echo "✓ Data playback with full controls"
echo "✓ Improved QML interface layout (no overlapping)"
echo "✓ Placeholder frames when no camera available"
echo "==========================================="

# Create build directory if it doesn't exist
if [ ! -d "build" ]; then
    echo "Creating build directory..."
    mkdir build
fi

cd build

# Build the application
echo "Building application..."
if [ ! -f "CameraSensorDashboard" ] || [ "../src/main.cpp" -nt "CameraSensorDashboard" ]; then
    echo "Configuring with CMake..."
    cmake ..
    
    if [ $? -ne 0 ]; then
        echo "CMake configuration failed!"
        exit 1
    fi
    
    echo "Building..."
    make -j$(nproc)
    
    if [ $? -ne 0 ]; then
        echo "Build failed!"
        exit 1
    fi
else
    echo "Application is up to date."
fi

# Run the application
echo "Starting Camera Sensor Dashboard..."
echo "Make sure your webcam is connected and available."
echo ""

# Create data directory
mkdir -p data

# Check if camera is available
if [ -e /dev/video0 ]; then
    echo "Camera device found at /dev/video0"
else
    echo "Warning: No camera device found at /dev/video0"
    echo "The application may not be able to capture video."
fi

# Run the application
./CameraSensorDashboard
