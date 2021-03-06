# CMakeLists for proccontrol/g++/32/stat/pic/none
set (CMAKE_CXX_FLAGS "${MUTATOR_DEFINES}  ${CXXFLAGS} ${MUTATEE_CXXFLAGS_GNU}   -g -O0 -fPIC")
set (CMAKE_CXX_FLAGS_DEBUG "")
set (CMAKE_CXX_FLAGS_RELEASE "")
set (CMAKE_CXX_FLAGS_RELWITHDEBINFO "")
set (CMAKE_CXX_COMPILER "${M_gnu_cxx}")
include_directories("${PROJECT_SOURCE_DIR}/testsuite/src")
include_directories("${PROJECT_SOURCE_DIR}/testsuite/src/proccontrol")
add_definitions(-DSOLO_MUTATEE)
set (CMAKE_EXE_LINKER_FLAGS "${MUTATEE_LDFLAGS_GNU}  -static")
IF (NOT ${M_gnu_cxx} MATCHES "NOTFOUND")
CHECK_MUTATEE_COMPILER ("${M_gnu_cxx}"
	"${MUTATOR_DEFINES}  ${CXXFLAGS} ${MUTATEE_CXXFLAGS_GNU}   -g -O0 -fPIC"
	"${MUTATEE_LDFLAGS_GNU}  -static"
	"CXX"
	"gnu_cxx 32 stat"
	MUTATEEgnucxx32statCXX)

IF (MUTATEEgnucxx32statCXX MATCHES "1")
include (${PROJECT_SOURCE_DIR}/i386-unknown-linux2.4/srclists.cmake)
add_executable (pc_breakpoint.stat_g++_32_pic_none ${SOURCE_LIST_68})
foreach (f ${SOURCE_LIST_68})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_breakpoint.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_breakpoint.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_detach.stat_g++_32_pic_none ${SOURCE_LIST_60})
foreach (f ${SOURCE_LIST_60})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_detach.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_detach.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_fork.stat_g++_32_pic_none ${SOURCE_LIST_80})
foreach (f ${SOURCE_LIST_80})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_fork.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_fork.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_fork_exec.stat_g++_32_pic_none ${SOURCE_LIST_99})
foreach (f ${SOURCE_LIST_99})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_fork_exec.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_fork_exec.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_groups.stat_g++_32_pic_none ${SOURCE_LIST_93})
foreach (f ${SOURCE_LIST_93})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_groups.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_groups.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_hw_breakpoint.stat_g++_32_pic_none ${SOURCE_LIST_4})
foreach (f ${SOURCE_LIST_4})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_hw_breakpoint.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_hw_breakpoint.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_irpc.stat_g++_32_pic_none ${SOURCE_LIST_79})
foreach (f ${SOURCE_LIST_79})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_irpc.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_irpc.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_launch.stat_g++_32_pic_none ${SOURCE_LIST_21})
foreach (f ${SOURCE_LIST_21})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_launch.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_launch.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_singlestep.stat_g++_32_pic_none ${SOURCE_LIST_44})
foreach (f ${SOURCE_LIST_44})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_singlestep.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_singlestep.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_stat.stat_g++_32_pic_none ${SOURCE_LIST_84})
foreach (f ${SOURCE_LIST_84})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_stat.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_stat.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_temp_detach.stat_g++_32_pic_none ${SOURCE_LIST_3})
foreach (f ${SOURCE_LIST_3})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_temp_detach.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_temp_detach.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_terminate.stat_g++_32_pic_none ${SOURCE_LIST_42})
foreach (f ${SOURCE_LIST_42})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_terminate.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_terminate.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_terminate_stopped.stat_g++_32_pic_none ${SOURCE_LIST_97})
foreach (f ${SOURCE_LIST_97})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_terminate_stopped.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_terminate_stopped.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_thread.stat_g++_32_pic_none ${SOURCE_LIST_17})
foreach (f ${SOURCE_LIST_17})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_thread.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_thread.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_thread_cont.stat_g++_32_pic_none ${SOURCE_LIST_8})
foreach (f ${SOURCE_LIST_8})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_thread_cont.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_thread_cont.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})
add_executable (pc_tls.stat_g++_32_pic_none ${SOURCE_LIST_102})
foreach (f ${SOURCE_LIST_102})
	get_source_file_property(lang ${f} LANGUAGE)
	if(lang MATCHES "C")
		set_source_files_properties(${f} PROPERTIES LANGUAGE CXX)
	endif()
	endforeach()
set_target_properties(pc_tls.stat_g++_32_pic_none PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries (pc_tls.stat_g++_32_pic_none ${CMAKE_DL_LIBS} ${CMAKE_THREAD_LIBS_INIT})


INSTALL (TARGETS
		pc_breakpoint.stat_g++_32_pic_none
		pc_detach.stat_g++_32_pic_none
		pc_fork.stat_g++_32_pic_none
		pc_fork_exec.stat_g++_32_pic_none
		pc_groups.stat_g++_32_pic_none
		pc_hw_breakpoint.stat_g++_32_pic_none
		pc_irpc.stat_g++_32_pic_none
		pc_launch.stat_g++_32_pic_none
		pc_singlestep.stat_g++_32_pic_none
		pc_stat.stat_g++_32_pic_none
		pc_temp_detach.stat_g++_32_pic_none
		pc_terminate.stat_g++_32_pic_none
		pc_terminate_stopped.stat_g++_32_pic_none
		pc_thread.stat_g++_32_pic_none
		pc_thread_cont.stat_g++_32_pic_none
		pc_tls.stat_g++_32_pic_none
	DESTINATION ${INSTALL_DIR})

ENDIF()
ENDIF()
