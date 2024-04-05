cmake_minimum_required(VERSION 3.10)
project(runtrack_cpp)

set(CMAKE_CXX_STANDARD 14)

# Add all your source files here
set(SOURCE_FILES
        Day3/Job9/Character/Character.cpp
        Day3/Job9/Decor/Decor.cpp
        Day3/Job9/Enemy/Enemy.cpp
        Day3/Job9/Game/Game.cpp
        Day3/Job9/Player/Player.cpp
        Day3/Job9/Vector2/Vector2d.cpp
        Day3/Job9/GameObject/GameObject.cpp
        Day3/Job10/Projectile/Projectile.cpp
        Day3/Job10/Projectile/Projectile.h++
)

add_executable(runtrack_cpp ${SOURCE_FILES})