#pragma once
#include <string>
#include <sstream>

class Logger{
public:
    enum class Level{DEBUG, INFO, WARNING, ERROR};
    static Level MinLevel;
    static void Log(Level lv, std::string msg, const char* file, int line);
    static const char* LevelName(Level lv);
};

#define LOG_DEBUG(...) do{\
    std::ostringstream _os;\
    _os << __VA_ARGS__;\
    Logger::Log(Logger::Level::DEBUG, _os.str(), __FILE__, __LINE__);\
}while(0)

#define LOG_INFO(...) do{\
    std::ostringstream _os;\
    _os << __VA_ARGS__;\
    Logger::Log(Logger::Level::INFO, _os.str(), __FILE__, __LINE__);\
}while(0)

#define LOG_WARNING(...) do{\
    std::ostringstream _os;\
    _os << __VA_ARGS__;\
    Logger::Log(Logger::Level::WARNING, _os.str(), __FILE__, __LINE__);\
}while(0)

#define LOG_ERROR(...) do{\
    std::ostringstream _os;\
    _os << __VA_ARGS__;\
    Logger::Log(Logger::Level::ERROR, _os.str(), __FILE__, __LINE__);\
}while(0)
