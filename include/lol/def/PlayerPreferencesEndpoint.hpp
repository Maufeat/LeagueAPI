#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerPreferencesEndpoint { 
    bool Enabled;
    bool EnforceHttps;
    std::string ServiceEndpoint;
    std::string Version;
    int64_t Retries; 
  };
  inline void to_json(json& j, const PlayerPreferencesEndpoint& v) {
    j["Enabled"] = v.Enabled; 
    j["EnforceHttps"] = v.EnforceHttps; 
    j["ServiceEndpoint"] = v.ServiceEndpoint; 
    j["Version"] = v.Version; 
    j["Retries"] = v.Retries; 
  }
  inline void from_json(const json& j, PlayerPreferencesEndpoint& v) {
    v.Enabled = j.at("Enabled").get<bool>(); 
    v.EnforceHttps = j.at("EnforceHttps").get<bool>(); 
    v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>(); 
    v.Version = j.at("Version").get<std::string>(); 
    v.Retries = j.at("Retries").get<int64_t>(); 
  }
}