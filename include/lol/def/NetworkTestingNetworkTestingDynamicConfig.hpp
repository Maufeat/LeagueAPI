#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct NetworkTestingNetworkTestingDynamicConfig { 
    std::string GameLatencyProbeServers;
    uint16_t GameLatencyProbePort;
    double GameLatencyProbability;
    double GameLatencyTimeoutSecs;
    uint8_t GameLatencyProbeCount;
    uint16_t GameLatencyProbeSize;
    std::string IPv4OptionsProbeServers;
    uint16_t IPv4OptionsProbePort;
    double IPv4OptionsProbability;
    uint8_t IPv4OptionsProbeCount;
    std::string IPv6SupportProbeServers;
    uint16_t IPv6SupportProbePort;
    double IPv6SupportProbability;
    uint8_t IPv6SupportProbeCount; 
  };
  inline void to_json(json& j, const NetworkTestingNetworkTestingDynamicConfig& v) {
    j["GameLatencyProbeServers"] = v.GameLatencyProbeServers; 
    j["GameLatencyProbePort"] = v.GameLatencyProbePort; 
    j["GameLatencyProbability"] = v.GameLatencyProbability; 
    j["GameLatencyTimeoutSecs"] = v.GameLatencyTimeoutSecs; 
    j["GameLatencyProbeCount"] = v.GameLatencyProbeCount; 
    j["GameLatencyProbeSize"] = v.GameLatencyProbeSize; 
    j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers; 
    j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort; 
    j["IPv4OptionsProbability"] = v.IPv4OptionsProbability; 
    j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount; 
    j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers; 
    j["IPv6SupportProbePort"] = v.IPv6SupportProbePort; 
    j["IPv6SupportProbability"] = v.IPv6SupportProbability; 
    j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount; 
  }
  inline void from_json(const json& j, NetworkTestingNetworkTestingDynamicConfig& v) {
    v.GameLatencyProbeServers = j.at("GameLatencyProbeServers").get<std::string>(); 
    v.GameLatencyProbePort = j.at("GameLatencyProbePort").get<uint16_t>(); 
    v.GameLatencyProbability = j.at("GameLatencyProbability").get<double>(); 
    v.GameLatencyTimeoutSecs = j.at("GameLatencyTimeoutSecs").get<double>(); 
    v.GameLatencyProbeCount = j.at("GameLatencyProbeCount").get<uint8_t>(); 
    v.GameLatencyProbeSize = j.at("GameLatencyProbeSize").get<uint16_t>(); 
    v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string>(); 
    v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t>(); 
    v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double>(); 
    v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t>(); 
    v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string>(); 
    v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t>(); 
    v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double>(); 
    v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t>(); 
  }
}