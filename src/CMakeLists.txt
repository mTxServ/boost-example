
set (agent_src example.cpp)

set(Boost_USE_STATIC_LIBS   ON)
find_package(Boost REQUIRED)

if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
	add_executable (HostMeAgent ${agent_src})

	# The rule to install daemon binary
	install (TARGETS HostMeAgent
		RUNTIME
		DESTINATION bin)
endif()
