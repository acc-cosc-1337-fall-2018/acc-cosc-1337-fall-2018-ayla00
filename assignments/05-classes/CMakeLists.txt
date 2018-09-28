project(classes_library)

add_library(classes_library "invoice_detail.cpp" "invoice_detail.h")
add_executable(classess_exe "main.cpp" "invoice_detail.cpp")