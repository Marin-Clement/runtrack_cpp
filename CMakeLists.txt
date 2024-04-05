cmake_minimum_required(VERSION 3.10)
project(runtrack_cpp)

set(CMAKE_CXX_STANDARD 14)

# Add all your source files here
set(SOURCE_FILES
        Day3/Job8/Character/Character.cpp
        Day3/Job8/Decor/Decor.cpp
        Day3/Job8/Enemy/Enemy.cpp
        Day3/Job8/Game/Game.cpp
        Day3/Job8/Player/Player.cpp
        Day3/Job8/Vector2/Vector2d.cpp
        Day3/Job8/GameObject/GameObject.cpp
)

add_executable(runtrack_cpp ${SOURCE_FILES})