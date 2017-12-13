#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerPreferencesEndpoint { 
    std::string Version;
    bool Enabled;
    bool EnforceHttps;
    int64_t Retries;
    std::string ServiceEndpoint; 
  };
  void to_json(json& j, const PlayerPreferencesEndpoint& v) {
  j["Version"] = v.Version; 
  j["Enabled"] = v.Enabled; 
  j["EnforceHttps"] = v.EnforceHttps; 
  j["Retries"] = v.Retries; 
  j["ServiceEndpoint"] = v.ServiceEndpoint; 
  }
  void from_json(const json& j, PlayerPreferencesEndpoint& v) {
  v.Version = j.at("Version").get<std::string>(); 
  v.Enabled = j.at("Enabled").get<bool>(); 
  v.EnforceHttps = j.at("EnforceHttps").get<bool>(); 
  v.Retries = j.at("Retries").get<int64_t>(); 
  v.ServiceEndpoint = j.at("ServiceEndpoint").get<std::string>(); 
  }
}