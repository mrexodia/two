set(LLVM_PATH "c:/Program Files/LLVM")

find_library(LIBCLANG libclang NO_DEFAULT_PATH PATHS "${LLVM_PATH}/lib" REQUIRED)

add_library(libclang INTERFACE)
target_link_libraries(libclang INTERFACE "${LIBCLANG}")
target_include_directories(libclang INTERFACE "${LLVM_PATH}/include")