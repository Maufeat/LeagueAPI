#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct NetworkTestingDynamicConfig { 
    std::string IPv4OptionsProbeServers;
    double IPv6SupportProbability;
    double IPv4OptionsProbability;
    uint8_t IPv6SupportProbeCount;
    std::string IPv6SupportProbeServers;
    uint16_t IPv6SupportProbePort;
    uint16_t IPv4OptionsProbePort;
    uint8_t IPv4OptionsProbeCount; 
  };
  inline void to_json(json& j, const NetworkTestingDynamicConfig& v) {
    j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers; 
    j["IPv6SupportProbability"] = v.IPv6SupportProbability; 
    j["IPv4OptionsProbability"] = v.IPv4OptionsProbability; 
    j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount; 
    j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers; 
    j["IPv6SupportProbePort"] = v.IPv6SupportProbePort; 
    j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort; 
    j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount; 
  }
  inline void from_json(const json& j, NetworkTestingDynamicConfig& v) {
    v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string>(); 
    v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double>(); 
    v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double>(); 
    v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t>(); 
    v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string>(); 
    v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t>(); 
    v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t>(); 
    v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t>(); 
  }
}