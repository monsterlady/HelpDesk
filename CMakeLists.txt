cmake_minimum_required(VERSION 3.9)
project(Toets)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_executable(toets main.cpp ${CMAKE_CURRENT_BINARY_DIR}/input.txt Employee.cpp Employee.h HelpDeskEmployee.cpp HelpDeskEmployee.h Ticket.cpp Ticket.h HardWareTicket.cpp HardWareTicket.h SoftWareTicket.cpp SoftWareTicket.h Administrator.cpp Administrator.h)

add_custom_command(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/input.txt
        COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/input.txt ${CMAKE_CURRENT_BINARY_DIR}/input.txt)
