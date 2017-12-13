#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderNetworkConfig { 
    bool enabled;
    std::string linkUrlTemplate;
    std::string unlinkUrlTemplate;
    std::string name; 
  };
  void to_json(json& j, const RecofrienderNetworkConfig& v) {
  j["enabled"] = v.enabled; 
  j["linkUrlTemplate"] = v.linkUrlTemplate; 
  j["unlinkUrlTemplate"] = v.unlinkUrlTemplate; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, RecofrienderNetworkConfig& v) {
  v.enabled = j.at("enabled").get<bool>(); 
  v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>(); 
  v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}