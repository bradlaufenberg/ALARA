# tools directory CMake file

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Add all necessary source files
SET(SOURCE_FILES dant2alara.C)
SET(SCRIPT_SOURCES extract_pathways.in summary.in)

# Link the Source Files to the executables
add_executable(dant2alara ${SOURCE_FILES})
install(PROGRAMS ${SCRIPT_SOURCES} DESTINATION bin)
