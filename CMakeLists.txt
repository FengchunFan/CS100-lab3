CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(lab
	main.cpp
)

ADD_EXECUTABLE(test_add
	add_test.hpp
)

ADD_EXECUTABLE(test_sub
        sub_test.hpp
)

ADD_EXECUTABLE(test_pow
        pow_test.hpp
)


TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
