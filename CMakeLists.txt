cmake_minimum_required(VERSION 3.19)
project(pbbot)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h" "idl/*.cc" "idl/*.h")
add_executable(pbbot ${SOURCES})

find_package(Drogon CONFIG REQUIRED)
IF (Drogon_FOUND)
    message("drogon found")
    target_link_libraries(pbbot PRIVATE Drogon::Drogon)
    include_directories(${Drogon_INCLUDE_DIR})
    #    target_link_libraries(main PRIVATE pg_lib UUID_lib coz::coz MySQL_lib)
endif ()

find_package(protobuf CONFIG REQUIRED)
if (protobuf_FOUND)
    message("protobuf found")
    target_link_libraries(pbbot PRIVATE protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite)
endif ()
#SET(CMAKE_BUILD_TYPE "Release")
