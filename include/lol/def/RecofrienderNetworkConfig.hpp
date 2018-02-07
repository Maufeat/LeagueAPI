#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderNetworkConfig { 
    std::string name;
    bool enabled;
    std::string linkUrlTemplate;
    std::string unlinkUrlTemplate; 
  };
  inline void to_json(json& j, const RecofrienderNetworkConfig& v) {
    j["name"] = v.name; 
    j["enabled"] = v.enabled; 
    j["linkUrlTemplate"] = v.linkUrlTemplate; 
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate; 
  }
  inline void from_json(const json& j, RecofrienderNetworkConfig& v) {
    v.name = j.at("name").get<std::string>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>(); 
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>(); 
  }
}