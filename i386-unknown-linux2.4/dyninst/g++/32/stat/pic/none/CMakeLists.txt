# CMakeLists for dyninst/g++/32/stat/pic/none
set (CMAKE_C_FLAGS "-g -I${PROJECT_SOURCE_DIR}/testsuite/src -I${PROJECT_SOURCE_DIR}/testsuite/src/dyninst ${MUTATOR_DEFINES}  ${CXXFLAGS} -DSOLO_MUTATEE ${MUTATEE_CXXFLAGS_GNU}    -fPIC")
set (CMAKE_C_FLAGS_DEBUG "")
set (CMAKE_C_FLAGS_RELEASE "")
set (CMAKE_C_COMPILER "${M_gnu_cxx}")
set (CMAKE_CXX_FLAGS ${CMAKE_C_FLAGS})
set (CMAKE_CXX_FLAGS_DEBUG ${CMAKE_C_FLAGS_DEBUG})
set (CMAKE_CXX_FLAGS_RELEASE ${CMAKE_C_FLAGS_RELEASE})
set (CMAKE_CXX_COMPILER ${CMAKE_C_COMPILER})
set (CMAKE_EXE_LINKER_FLAGS "${MUTATEE_LDFLAGS_GNU}  -static")
include (../../../../../../srclists.cmake)
add_executable (dyninst_cxx_group_test.stat_g++_32_pic_none ${SOURCE_LIST_57})
add_executable (dyninst_group_test.stat_g++_32_pic_none ${SOURCE_LIST_64})
target_link_libraries (dyninst_group_test.stat_g++_32_pic_none dl)
add_executable (test1_14.stat_g++_32_pic_none ${SOURCE_LIST_71})
add_executable (test1_29.stat_g++_32_pic_none ${SOURCE_LIST_59})
add_executable (test1_35.stat_g++_32_pic_none ${SOURCE_LIST_92})


INSTALL (TARGETS
		dyninst_cxx_group_test.stat_g++_32_pic_none
		dyninst_group_test.stat_g++_32_pic_none
		test1_14.stat_g++_32_pic_none
		test1_29.stat_g++_32_pic_none
		test1_35.stat_g++_32_pic_none
	DESTINATION ${INSTALL_DIR})