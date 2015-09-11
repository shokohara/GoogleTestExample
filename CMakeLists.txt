cmake_minimum_required(VERSION 2.8)
set(GTEST_ROOT $ENV{HOME}/usr/src/gtest)
include_directories(
	    ${GTEST_ROOT}/googletest/googletest/include
		    )
		add_executable(gtest_example gtest_example.cpp)
		target_link_libraries(gtest_example
			    pthread
				    ${GTEST_ROOT}/build/libgtest.a
					    ${GTEST_ROOT}/build/libgtest_main.a
						    )
