cmake_minimum_required(VERSION 2.6)

project(HelloMpiProject)
add_executable(hello_mpi hello_mpi.cpp)

# Require MPI for this project:
find_package(MPI REQUIRED)
if(MPI_FOUND)
  set(CMAKE_CXX_COMPILE_FLAGS ${CMAKE_CXX_COMPILE_FLAGS} ${MPI_COMPILE_FLAGS})
  set(CMAKE_CXX_LINK_FLAGS ${CMAKE_CXX_LINK_FLAGS} ${MPI_LINK_FLAGS})

  include_directories(${MPI_INCLUDE_PATH})
  target_link_libraries(hello_mpi ${MPI_LIBRARIES})
  add_definitions(-DMPICH_IGNORE_CXX_SEEK)
endif(MPI_FOUND)

