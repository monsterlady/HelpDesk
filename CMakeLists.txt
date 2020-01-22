cmake_minimum_required(VERSION 3.9)
project(Toets)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(toets main.cpp ${CMAKE_CURRENT_BINARY_DIR}/input.txt Admin.cpp Admin.h Employee.cpp Employee.h HelpdeskEmployee.cpp HelpdeskEmployee.h Ticket.cpp Ticket.h SoftwareTicket.cpp SoftwareTicket.h HardwareTicket.cpp HardwareTicket.h)

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/input.txt
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt)
