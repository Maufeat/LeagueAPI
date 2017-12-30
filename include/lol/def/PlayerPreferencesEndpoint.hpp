#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerPreferencesEndpoint { 
    std::string ServiceEndpoint;
    bool Enabled;
    int64_t Retries;
    std::string Version;
    bool EnforceHttps; 
  };
  inline void to_json(json& j, const PlayerPreferencesEndpoint& v) {
    j["ServiceEndpoint"] = v.ServiceEndpoint; 
    j["Enabled"] = v.Enabled; 
    j["Retries"] = v.Retries; 
    j["Version"] = v.Version; 
    j["EnforceHttps"] = v.EnforceHttps; 
  }
  inline void from_json(const json& j, PlayerPreferencesEndpoint& v) {
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>(); 
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.Retries = j.at("Retries").get<int64_t>(); 
    v.Version = j.at("Version").get<std::string>(); 
    v.EnforceHttps = j.at("EnforceHttps").get<bool>(); 
  }
}