set(TEST_HEADER_LIST
        tests.h
        )

set(TEST_SOURCE_LIST
        main.c
        )

include_directories(${CGREEN_PUBLIC_INCLUDE_DIRS} ${PROJECT_BINARY_DIR})
add_executable(libdc_unix_test ${TEST_SOURCE_LIST} ${TEST_HEADER_LIST} ${SOURCE_LIST} ${HEADER_LIST})

target_compile_features(libdc_unix_test PRIVATE c_std_17)

target_include_directories(libdc_unix_test PRIVATE ../include/dc_unix)
target_include_directories(libdc_unix_test PRIVATE /usr/include)
target_include_directories(libdc_unix_test PRIVATE /usr/local/include)

find_library(LIB_M m)
find_library(LIBCGREEN cgreen REQUIRED)
find_library(LIBDC_ERROR dc_error REQUIRED)
find_library(LIBDC_ENV dc_env REQUIRED)
find_library(LIBRESOLV resolv)

target_link_libraries(libdc_unix_test PRIVATE ${LIBCGREEN})
target_link_libraries(libdc_unix_test PRIVATE ${LIBDC_ERROR})
target_link_libraries(libdc_unix_test PRIVATE ${LIBDC_ENV})

if(LIBRESOLV)
    target_link_libraries(dc_unix PUBLIC ${LIBRESOLV})
endif()

add_test(NAME dc_unix_test COMMAND libdc_unix_test)
