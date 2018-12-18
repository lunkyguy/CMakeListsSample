add_definitions("-DLIBHELLO_BUILD")
file(GLOB_RECURSE SRC_LIB "*.cpp" "*.h")
add_library(libhello SHARED ${SRC_LIB})