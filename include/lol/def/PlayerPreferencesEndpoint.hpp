#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerPreferencesEndpoint { 
    std::string ServiceEndpoint;
    bool Enabled;
    std::string Version;
    int64_t Retries;
    bool EnforceHttps; 
  };
  inline void to_json(json& j, const PlayerPreferencesEndpoint& v) {
    j["ServiceEndpoint"] = v.ServiceEndpoint; 
    j["Enabled"] = v.Enabled; 
    j["Version"] = v.Version; 
    j["Retries"] = v.Retries; 
    j["EnforceHttps"] = v.EnforceHttps; 
  }
  inline void from_json(const json& j, PlayerPreferencesEndpoint& v) {
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>(); 
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.Version = j.at("Version").get<std::string>(); 
    v.Retries = j.at("Retries").get<int64_t>(); 
    v.EnforceHttps = j.at("EnforceHttps").get<bool>(); 
  }
}