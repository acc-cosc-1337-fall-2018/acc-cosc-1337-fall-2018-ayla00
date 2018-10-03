project(classes_library)

add_library(classes_library "invoice_detail.cpp" "invoice_detail.h" "invoice.h" "invoice.cpp")
add_executable(classess_exe "main.cpp")
target_link_libraries(classes_exe classes_library)