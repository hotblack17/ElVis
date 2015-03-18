

#Get the name of the binary directory
STRING( TOUPPER ${CMAKE_BINARY_DIR} BIN_DIR_NAME )
STRING( FIND ${BIN_DIR_NAME} "/" LAST_DIR_IDX REVERSE )
STRING( SUBSTRING ${BIN_DIR_NAME} LAST_DIR_IDX -1 BIN_DIR_NAME )

SET( GCOV_COMMAND gcov )
  
IF( BIN_DIR_NAME MATCHES "CLANG34" )
  SET( CMAKE_C_COMPILER clang-3.4 )
  SET( CMAKE_CXX_COMPILER clang++-3.4 )
ELSEIF( BIN_DIR_NAME MATCHES "CLANG" )
  FIND_PROGRAM( CMAKE_C_COMPILER clang )
  FIND_PROGRAM( CMAKE_CXX_COMPILER clang++ )
  IF( NOT CMAKE_C_COMPILER )
    FIND_PROGRAM( CMAKE_C_COMPILER clang-3.4 )
  ENDIF()
  IF( NOT CMAKE_CXX_COMPILER )
    FIND_PROGRAM( CMAKE_CXX_COMPILER clang++-3.4 )
  ENDIF()
ELSEIF( BIN_DIR_NAME MATCHES "INTEL" )
  SET( CMAKE_C_COMPILER icc )
  SET( CMAKE_CXX_COMPILER icpc )
ELSEIF( BIN_DIR_NAME MATCHES "GNU48" AND NOT APPLE )
  SET( CMAKE_C_COMPILER gcc-4.8 )
  SET( CMAKE_CXX_COMPILER g++-4.8 )
  SET( GCOV_COMMAND gcov-4.8 )
ELSEIF( BIN_DIR_NAME MATCHES "GNU47" AND NOT APPLE )
  SET( CMAKE_C_COMPILER gcc-4.7 )
  SET( CMAKE_CXX_COMPILER g++-4.7 )
  SET( GCOV_COMMAND gcov-4.7 )
ELSEIF( BIN_DIR_NAME MATCHES "GNU" )
  SET( CMAKE_C_COMPILER gcc )
  SET( CMAKE_CXX_COMPILER g++ )
ENDIF()

IF( CMAKE_C_COMPILER )
  SET( CUDA_HOST_COMPILER ${CMAKE_C_COMPILER} )
ENDIF()
