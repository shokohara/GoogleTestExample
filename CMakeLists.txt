cmake_minimum_required(VERSION 3.3)
option(test "Build all tests." OFF)
add_library(
example_lib src/example.cpp
)
target_link_libraries(example example_lib)
target_link_libraries(gtest_example
    pthread
    ${GTEST_ROOT}/build/libgtest.a
    ${GTEST_ROOT}/build/libgtest_main.a
)
if (test)
enable_testing()
set(GTEST_ROOT $ENV{HOME}/usr/src/gtest)
include_directories(
    ${GTEST_ROOT}/googletest/googletest/include
)
add_executable(runUnitTests test/gtest_example.cpp)
  # This is so you can do 'make test' to see all your tests run, instead of
  # manually running the executable runUnitTests to see those specific tests.
  add_test(NAME that-test-I-made COMMAND runUnitTests)

  # You can also omit NAME and COMMAND. The second argument could be some other
  # test executable.
  add_test(that-other-test-I-made runUnitTests)
endif()
