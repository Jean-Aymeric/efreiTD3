cmake_minimum_required(VERSION 3.20)
project(efreiTD3 C)

set(CMAKE_C_STANDARD 99)

add_executable(efreiTD3 main.c stack_table.c stack_table.h queue_table.c queue_table.h customer.c customer.h)
