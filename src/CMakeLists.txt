
set (agent_src example.cpp)

find_package(Boost)

if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
	add_executable (HostMeAgent ${agent_src})

	# The rule to install daemon binary
	install (TARGETS HostMeAgent
		RUNTIME
		DESTINATION bin)
endif()
