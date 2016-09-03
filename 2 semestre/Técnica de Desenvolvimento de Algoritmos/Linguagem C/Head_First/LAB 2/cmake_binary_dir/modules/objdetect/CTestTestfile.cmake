# CMake generated Testfile for 
# Source directory: /home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/2/opencv/modules/objdetect
# Build directory: /home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/modules/objdetect
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_objdetect "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/bin/opencv_test_objdetect" "--gtest_output=xml:opencv_test_objdetect.xml")
set_tests_properties(opencv_test_objdetect PROPERTIES  LABELS "Main;opencv_objdetect;Accuracy" WORKING_DIRECTORY "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/test-reports/accuracy")
add_test(opencv_perf_objdetect "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/bin/opencv_perf_objdetect" "--gtest_output=xml:opencv_perf_objdetect.xml")
set_tests_properties(opencv_perf_objdetect PROPERTIES  LABELS "Main;opencv_objdetect;Performance" WORKING_DIRECTORY "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/test-reports/performance")
add_test(opencv_sanity_objdetect "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/bin/opencv_perf_objdetect" "--gtest_output=xml:opencv_perf_objdetect.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_objdetect PROPERTIES  LABELS "Main;opencv_objdetect;Sanity" WORKING_DIRECTORY "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/test-reports/sanity")
