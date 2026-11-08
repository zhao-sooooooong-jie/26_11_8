#include "Logger.h"
#include <ctime>
#include <iostream>

Logger::Level Logger::MinLevel = Logger::Level::DEBUG;

const char* Logger::LevelName(Level lv)
{
    switch(lv)
    {
        case Level::DEBUG : return "DEBUG";
        case Level::INFO : return "INFO";
        case Level::WARNING : return "WARNING";
        case Level::ERROR : return "REEOR";
    }
    return "UNKNOW";
}

void Logger::Log(Level lv, std::string msg, const char* file, int line)
{
    if(lv < MinLevel)
    {
        return;
    }
    std::time_t now = time(0);
    std::tm tmv{};
#if defined(_WIN32)
    localtime_s(&tmv, &now);
#else
    localtime_r(&now, &tmv);
#endif
    char timeStr[20];
    strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H-%M-%S", &tmv);
    std::ostream &_oss = (lv == Level::ERROR) ? std::cerr : std::cout;
    _oss << "[" << timeStr << "]" << file << ":" << line << "---"<<LevelName(lv) << "  " << msg << std::endl;
}