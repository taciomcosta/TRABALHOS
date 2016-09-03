# CMake generated Testfile for 
# Source directory: /home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/2/opencv/modules/flann
# Build directory: /home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/modules/flann
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_flann "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/bin/opencv_test_flann" "--gtest_output=xml:opencv_test_flann.xml")
set_tests_properties(opencv_test_flann PROPERTIES  LABELS "Main;opencv_flann;Accuracy" WORKING_DIRECTORY "/home/taciomcosta/Área de Trabalho/Linguagem C/Head_First/LAB 2/cmake_binary_dir/test-reports/accuracy")
