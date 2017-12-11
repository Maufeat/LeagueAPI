cmake_minimum_required(VERSION 3.1)

if(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
endif()

add_subdirectory(openssl)
add_subdirectory(tiny-process-library)
add_library(leagueapi STATIC include/asio.cpp)
# makes assio not depend on boost
target_compile_definitions(leagueapi PUBLIC HAVE_OPENSSL USE_STANDALONE_ASIO ASIO_STANDALONE ASIO_SEPARATE_COMPILATION)
target_include_directories(leagueapi PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
${CMAKE_CURRENT_SOURCE_DIR}/template/cpp
${CMAKE_CURRENT_SOURCE_DIR}/output/cpp)
target_link_libraries(leagueapi openssl tiny-process-library)