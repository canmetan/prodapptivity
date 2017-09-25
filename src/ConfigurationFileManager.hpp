/**
*   Responsible for reading and modifying configuration files.
*   Stores the path information into settings file.
**/

#ifndef CONFIGURATIONFILEMANAGER_HPP
#define CONFIGURATIONFILEMANAGER_HPP

#include <vector>

#include "Configuration.hpp"

class ConfigurationFileManager
{
    public:
        ConfigurationFileManager();
        virtual ~ConfigurationFileManager();

    public:
        bool loadConfig(Configuration &configSettings);
        bool saveConfig(Configuration &configSettings);

    private:
        Configuration m_config;
        string m_currentConfigPath;
};

#endif // CONFIGURATIONFILEMANAGER_HPP