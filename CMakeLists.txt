cmake_minimum_required(VERSION 3.10)
project(runtrack_cpp)

set(CMAKE_CXX_STANDARD 14)

# Add all your source files here
set(SOURCE_FILES
        Day3/Job11/Character/Character.cpp
        Day3/Job11/Decor/Decor.cpp
        Day3/Job11/Enemy/Enemy.cpp
        Day3/Job11/Game/Game.cpp
        Day3/Job11/Player/Player.cpp
        Day3/Job11/Vector2/Vector2d.cpp
        Day3/Job11/GameObject/GameObject.cpp
        Day3/Job11/Projectile/Projectile.cpp
        Day3/Job11/Projectile/Projectile.h++
)

add_executable(runtrack_cpp ${SOURCE_FILES})