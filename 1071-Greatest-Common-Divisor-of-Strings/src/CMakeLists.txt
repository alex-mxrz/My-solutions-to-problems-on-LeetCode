add_executable(${PROJECT_NAME} entry_point.cxx task.hxx)

set_target_properties(
  ${PROJECT_NAME}
  PROPERTIES OUTPUT_NAME ${PROJECT_NAME}_${CMAKE_BUILD_TYPE}
             POSITION_INDEPENDENT_CODE ON
             PREFIX "")

target_compile_options(${PROJECT_NAME} PRIVATE ${_COMPILE_OPTIONS})
target_link_options(${PROJECT_NAME} PRIVATE ${_LINK_OPTIONS})
