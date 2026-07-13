#pragma once

#include <cstdint>
#include <string>

class Bandwidth
{
public:
    std::int64_t measureDownload(const std::string& url);
    std::int64_t measureUpload(const std::string& url);

    std::int64_t measurePing(const std::string& host);
    double measurePacketLoss(const std::string& host);
};