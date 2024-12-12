
cmake_minimum_required(VERSION 3.15)

set(EXEC_NAME __JUCO)

project(${EXEC_NAME} VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("/Users/emgor/Documents/JUCE" "${CMAKE_BINARY_DIR}/JUCE")


juce_add_console_app(${EXEC_NAME})


target_sources(${EXEC_NAME}
    PRIVATE
        piGO.cpp
)

target_link_libraries(${EXEC_NAME}
    PRIVATE
    juce::juce_audio_basics
    juce::juce_audio_devices
    juce::juce_audio_formats
    juce::juce_audio_processors
    juce::juce_audio_utils
    juce::juce_dsp
    juce::juce_gui_basics
    juce::juce_gui_extra
)


juce_generate_juce_header(${EXEC_NAME})

set_target_properties(${EXEC_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

