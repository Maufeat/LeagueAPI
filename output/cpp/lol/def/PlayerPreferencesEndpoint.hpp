#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerPreferencesEndpoint { 
    bool Enabled;
    std::string Version;
    bool EnforceHttps;
    std::string ServiceEndpoint;
    int64_t Retries; 
  };
  void to_json(json& j, const PlayerPreferencesEndpoint& v) {
  j["Enabled"] = v.Enabled; 
  j["Version"] = v.Version; 
  j["EnforceHttps"] = v.EnforceHttps; 
  j["ServiceEndpoint"] = v.ServiceEndpoint; 
  j["Retries"] = v.Retries; 
  }
  void from_json(const json& j, PlayerPreferencesEndpoint& v) {
  v.Enabled = j.at("Enabled").get<bool>(); 
  v.Version = j.at("Version").get<std::string>(); 
  v.EnforceHttps = j.at("EnforceHttps").get<bool>(); 
  v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>(); 
  v.Retries = j.at("Retries").get<int64_t>(); 
  }
}