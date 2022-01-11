add_test( HelloTest.BasicAssertions [==[/home/clay/Documents/c++/cpp_advance/Programming_Abstraction_in_C++/lecture_3/google_test/build/hello_test]==] [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties( HelloTest.BasicAssertions PROPERTIES WORKING_DIRECTORY [==[/home/clay/Documents/c++/cpp_advance/Programming_Abstraction_in_C++/lecture_3/google_test/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS HelloTest.BasicAssertions)
