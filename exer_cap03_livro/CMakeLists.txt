cmake_minimum_required(VERSION 3.16)

project(exer_cap03_livro LANGUAGES C)

add_executable(exer_cap03_livro main.c)

include(GNUInstallDirs)
install(TARGETS exer_cap03_livro
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
