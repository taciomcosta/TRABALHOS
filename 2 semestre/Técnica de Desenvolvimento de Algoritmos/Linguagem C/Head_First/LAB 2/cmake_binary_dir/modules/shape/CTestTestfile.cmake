# CMake generated Testfile for 
# Source directory: /home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/2/opencv/modules/shape
# Build directory: /home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/modules/shape
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_shape "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/bin/opencv_test_shape" "--gtest_output=xml:opencv_test_shape.xml")
set_tests_properties(opencv_test_shape PROPERTIES  LABELS "Main;opencv_shape;Accuracy" WORKING_DIRECTORY "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/test-reports/accuracy")
