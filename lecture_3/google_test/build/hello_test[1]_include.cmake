if(EXISTS "/home/clay/Documents/c++/cpp_advance/Programming_Abstraction_in_C++/lecture_3/google_test/build/hello_test[1]_tests.cmake")
  include("/home/clay/Documents/c++/cpp_advance/Programming_Abstraction_in_C++/lecture_3/google_test/build/hello_test[1]_tests.cmake")
else()
  add_test(hello_test_NOT_BUILT hello_test_NOT_BUILT)
endif()
