#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderNetworkConfig { 
    bool enabled;
    std::string unlinkUrlTemplate;
    std::string linkUrlTemplate;
    std::string name; 
  };
  inline void to_json(json& j, const RecofrienderNetworkConfig& v) {
    j["enabled"] = v.enabled; 
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate; 
    j["linkUrlTemplate"] = v.linkUrlTemplate; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, RecofrienderNetworkConfig& v) {
    v.enabled = j.at("enabled").get<bool>(); 
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>(); 
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}