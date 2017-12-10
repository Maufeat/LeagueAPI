cmake_minimum_required(VERSION 3.1)

if(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")
else()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
endif()

add_subdirectory(openssl)
add_subdirectory(tiny-process-library)
add_library(SimpleWeb STATIC SimpleWeb.cpp)
# makes assio not depend on boost
target_compile_definitions(SimpleWeb PUBLIC HAVE_OPENSSL USE_STANDALONE_ASIO ASIO_STANDALONE ASIO_SEPARATE_COMPILATION)
# makes websocketpp not depend on boost
target_compile_definitions(SimpleWeb PUBLIC 
-D_WEBSOCKETPP_CPP11_STL_ 
-D_WEBSOCKETPP_CPP11_MEMORY_
-D_WEBSOCKETPP_CPP11_RANDOM_DEVICE
-D_WEBSOCKETPP_CPP11_SYSTEM_ERROR_
-D_WEBSOCKETPP_CPP11_FUNCTIONAL_
-D_WEBSOCKETPP_CPP11_TYPE_TRAITS_
-D_WEBSOCKETPP_CPP11_THREAD_
-D_WEBSOCKETPP_CPP11_REGEX_
-D_WEBSOCKETPP_CPP11_RANDOM_DEVICE_
-D_WEBSOCKETPP_CPP11_FUNCTIONAL_
-D_WEBSOCKETPP_CPP11_CHRONO_)
target_include_directories(SimpleWeb PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/openssl/include)
target_include_directories(SimpleWeb PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)