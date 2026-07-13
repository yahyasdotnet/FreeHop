#pragma once

#include <cstdint>
#include <string>

// store stats of eeach conf file 

struct ConfData
{
    std::string name;

    std::string endpoint;
    std::string ipAddress;

    std::string country;
    std::string region;
    std::string city;

    std::int64_t uploadSpeed;
    std::int64_t downloadSpeed;

    double maxBandwidth;
    double minBandwidth;

    int ping;
    double packetLoss;

    bool online;
};