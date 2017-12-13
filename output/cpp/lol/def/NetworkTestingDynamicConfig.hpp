#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct NetworkTestingDynamicConfig { 
    std::string IPv6SupportProbeServers;
    uint8_t IPv6SupportProbeCount;
    uint16_t IPv4OptionsProbePort;
    std::string IPv4OptionsProbeServers;
    uint16_t IPv6SupportProbePort;
    double IPv4OptionsProbability;
    uint8_t IPv4OptionsProbeCount;
    double IPv6SupportProbability; 
  };
  void to_json(json& j, const NetworkTestingDynamicConfig& v) {
  j["IPv6SupportProbeServers"] = v.IPv6SupportProbeServers; 
  j["IPv6SupportProbeCount"] = v.IPv6SupportProbeCount; 
  j["IPv4OptionsProbePort"] = v.IPv4OptionsProbePort; 
  j["IPv4OptionsProbeServers"] = v.IPv4OptionsProbeServers; 
  j["IPv6SupportProbePort"] = v.IPv6SupportProbePort; 
  j["IPv4OptionsProbability"] = v.IPv4OptionsProbability; 
  j["IPv4OptionsProbeCount"] = v.IPv4OptionsProbeCount; 
  j["IPv6SupportProbability"] = v.IPv6SupportProbability; 
  }
  void from_json(const json& j, NetworkTestingDynamicConfig& v) {
  v.IPv6SupportProbeServers = j.at("IPv6SupportProbeServers").get<std::string>(); 
  v.IPv6SupportProbeCount = j.at("IPv6SupportProbeCount").get<uint8_t>(); 
  v.IPv4OptionsProbePort = j.at("IPv4OptionsProbePort").get<uint16_t>(); 
  v.IPv4OptionsProbeServers = j.at("IPv4OptionsProbeServers").get<std::string>(); 
  v.IPv6SupportProbePort = j.at("IPv6SupportProbePort").get<uint16_t>(); 
  v.IPv4OptionsProbability = j.at("IPv4OptionsProbability").get<double>(); 
  v.IPv4OptionsProbeCount = j.at("IPv4OptionsProbeCount").get<uint8_t>(); 
  v.IPv6SupportProbability = j.at("IPv6SupportProbability").get<double>(); 
  }
}