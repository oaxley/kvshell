/*
 * @file    constants.h
 * @brief   Header for Constants definition
 */

// ----- guards
#ifndef CONSTANTS_H
#define CONSTANTS_H

// ----- includes
#include <chrono>
#include <string>

// ----- namespace definition
namespace Constants
{
    // program name and version
    inline static std::string program_name{"kvshell"};
    inline static std::string program_version{"0.1.0"};
}

namespace Constants::Config
{
    inline static std::string filename{"configuration.toml"};
    inline static std::string database{"/etc/kvstore.db"};

    inline static std::string srv_address{"0.0.0.0"};
    inline static std::string srv_port{"4567"};

    inline static std::string clt_address{"localhost"};
    inline static std::string clt_port{"4567"};
}

namespace Constants::Network
{
    inline static int server_listen_max{5};
    inline static int epoll_max_events{10};
    inline static int epoll_timeout{200};                   //< timeout in ms
}

namespace Constants::Network::Protocol
{
    inline static std::uint8_t sot{0xFA};                       //< start of transmission
    inline static std::uint8_t eot{0xFB};                       //< end of transmission
    inline static std::uint16_t max_item_size{(1 << 16) - 1};   //< max item size

    inline static int max_read_buffer{1024};                    //< max read buffer for client / server
}

namespace Constants::KVServer
{
    using namespace std::chrono_literals;
    inline constexpr std::chrono::milliseconds kvserver_mainloop_timeout{200ms};
}

#endif // CONSTANTS_H