cmake_minimum_required(VERSION 3.29)
project(intro)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        intro main.cpp
        src/GameEngine.h
        src/GameEngine.cpp
        config/Config.cpp
        config/Config.h
        src/character/Character.h
        src/character/Player.cpp
        src/character/Player.h
        src/character/BattleEntity.h
        src/character/TalkEntity.h
)
