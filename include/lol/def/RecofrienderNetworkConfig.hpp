#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderNetworkConfig { 
    std::string name;
    std::string linkUrlTemplate;
    std::string unlinkUrlTemplate;
    bool enabled; 
  };
  inline void to_json(json& j, const RecofrienderNetworkConfig& v) {
    j["name"] = v.name; 
    j["linkUrlTemplate"] = v.linkUrlTemplate; 
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate; 
    j["enabled"] = v.enabled; 
  }
  inline void from_json(const json& j, RecofrienderNetworkConfig& v) {
    v.name = j.at("name").get<std::string>(); 
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>(); 
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>(); 
    v.enabled = j.at("enabled").get<bool>(); 
  }
}