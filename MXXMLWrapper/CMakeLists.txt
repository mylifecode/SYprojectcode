SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /wd4251 /wd4275 /wd4193")

#add ogre include directories
INCLUDE_DIRECTORIES(${OGRE_INCLUDE_DIRECTORIES})
LINK_DIRECTORIES(${OGRE_LIBRARY_DIRECTORIES})

INCLUDE_DIRECTORIES("./")
INCLUDE_DIRECTORIES("include/")
INCLUDE_DIRECTORIES("./Robot/include")
INCLUDE_DIRECTORIES("./Common/include")
INCLUDE_DIRECTORIES("./UI/include")
INCLUDE_DIRECTORIES("${PROJECT_SOURCE_DIR}/MXCommon/include/")

add_definitions("-DTIXML_USE_STL")
add_definitions(-DUNICODE -D_UNICODE)

FILE(GLOB HEADERS "./*.h")
FILE(GLOB SOURCES "./*.cpp")
FILE(GLOB COMMON "Common/include/*.h" "Common/src/*.cpp")
FILE(GLOB ROBOT "ROBOT/include/*.h" "ROBOT/src/*.cpp")
FILE(GLOB UI "UI/include/*.h" "UI/src/*.cpp")
SOURCE_GROUP(Common FILES ${COMMON})
SOURCE_GROUP(XMLRobot FILES ${ROBOT})
SOURCE_GROUP(XMLWindow FILES ${UI})

add_library(SYXMLWrapper ${HEADERS} ${SOURCES} ${COMMON} ${ROBOT} ${UI})

#link libraries
SET(CMAKE_LINK_LIBRARY_SUFFIX "")
TARGET_LINK_LIBRARIES(SYXMLWrapper ${OGRE_LIBRARIES})

