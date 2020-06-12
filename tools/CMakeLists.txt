# tools directory CMake file

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Add all necessary source files
SET(SOURCE_FILES dant2alara.C)

# Link the Source Files to the executable
add_executable(dant2alara ${SOURCE_FILES})
