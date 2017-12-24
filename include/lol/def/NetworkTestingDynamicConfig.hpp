#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct NetworkTestingDynamicConfig { 
    uint8_t IPv4OptionsProbeCount;
    std::string IPv6SupportProbeServers;
    uint16_t IPv6SupportProbePort;
    double IPv4OptionsProbability;
    std::string IPv4OptionsProbeServers;
    uint16_t IPv4OptionsProbePort;
    double IPv6SupportProbability;
    uint8_t IPv6SupportProbeCount; 
  };
  inline void to_json(json& j, const NetworkTestingDynamicConfig& v) {
    j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount; 
    j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers; 
    j["IPv6SupportProbePort"] = v.IPv6SupportProbePort; 
    j["IPv4OptionsProbability"] = v.IPv4OptionsProbability; 
    j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers; 
    j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort; 
    j["IPv6SupportProbability"] = v.IPv6SupportProbability; 
    j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount; 
  }
  inline void from_json(const json& j, NetworkTestingDynamicConfig& v) {
    v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t>(); 
    v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string>(); 
    v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t>(); 
    v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double>(); 
    v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string>(); 
    v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t>(); 
    v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double>(); 
    v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t>(); 
  }
}