cmake_minimum_required(VERSION 3.1)

if(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fpermissive")
endif()

set(OPENSSL_USE_STATIC_LIBS TRUE)
find_package(OpenSSL REQUIRED)
add_subdirectory(tiny-process-library)
add_library(leagueapi STATIC 
include/asio.cpp 
output/cpp/lol/base_def.hpp 
output/cpp/lol/base_op.hpp)

# makes assio not depend on boost
target_compile_definitions(leagueapi PUBLIC HAVE_OPENSSL USE_STANDALONE_ASIO ASIO_STANDALONE ASIO_SEPARATE_COMPILATION)
target_include_directories(leagueapi PUBLIC 
${OPENSSL_INCLUDE_DIR}
${CMAKE_CURRENT_SOURCE_DIR}/include 
${CMAKE_CURRENT_SOURCE_DIR}/output/cpp)
target_link_libraries(leagueapi ${OPENSSL_LIBRARIES} tiny-process-library)
if(WIN32 AND NOT CYGWIN)
	target_link_libraries(leagueapi ws2_32 crypt32 wsock32)
endif()