cmake_minimum_required(VERSION 3.0.0)
project(dbcc VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(dbcc main.c getopt.c can.c mpc.c parse.c util.c 
              2bsm.c 2c.c 2csv.c 2js.c 2xml.c )

INSTALL(TARGETS dbcc DESTINATION bin)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
