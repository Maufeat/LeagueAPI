cmake_minimum_required(VERSION 3.1)

add_library(tiny-process-library STATIC process.cpp)
target_include_directories(tiny-process-library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if(WIN32)
  target_sources(tiny-process-library PRIVATE process_win.cpp)
  if(MSYS)
    target_compile_definitions(tiny-process-library PUBLIC MSYS_PROCESS_USE_SH)
  endif()
else()
  target_sources(tiny-process-library PRIVATE process_unix.cpp)
endif()