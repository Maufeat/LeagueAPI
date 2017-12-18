#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderNetworkConfig { 
    std::string linkUrlTemplate;
    std::string unlinkUrlTemplate;
    std::string name;
    bool enabled; 
  };
  inline void to_json(json& j, const RecofrienderNetworkConfig& v) {
    j["linkUrlTemplate"] = v.linkUrlTemplate; 
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate; 
    j["name"] = v.name; 
    j["enabled"] = v.enabled; 
  }
  inline void from_json(const json& j, RecofrienderNetworkConfig& v) {
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>(); 
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.enabled = j.at("enabled").get<bool>(); 
  }
}