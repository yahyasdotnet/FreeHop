#include "Bandwidth.h"

#include <chrono>

using namespace std;

std::int64_t Bandwidth::measureDownload(const std::string& url)
{
    (void)url;
    // we have a spring boot application that is running on the server and we can use it to measure the download speed

    auto start = chrono::high_resolution_clock::now();

    uint64_t bytesDownloaded = 0;
    while (read(url, &bytesDownloaded, sizeof(bytesDownloaded)) > 0)
    {
        bytesDownloaded += sizeof(bytesDownloaded);
    }

    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    return bytesDownloaded / duration;
    
}


std::int64_t Bandwidth::measureUpload(const std::string& url)
{
}


std::int64_t Bandwidth::measurePing(const std::string& url)
{
}


double Bandwidth::measurePacketLoss(const std::string& url)
{
}
