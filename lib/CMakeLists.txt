if (NOT DEFINED CMAKE_PROJECT_MINIMUM_VERSION)
    message(FATAL_ERROR "Variable 'CMAKE_PROJECT_MINIMUM_VERSION' must be defined from the root file")
endif()

cmake_minimum_required(VERSION ${CMAKE_PROJECT_MINIMUM_VERSION})

if (NOT DEFINED LIBRARY_NAME)
    message(FATAL_ERROR "")
endif()