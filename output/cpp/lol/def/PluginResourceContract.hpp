#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginResourceContract { 
    std::string fullName;
    std::string version; 
  };
  void to_json(json& j, const PluginResourceContract& v) {
  j["fullName"] = v.fullName; 
  j["version"] = v.version; 
  }
  void from_json(const json& j, PluginResourceContract& v) {
  v.fullName = j.at("fullName").get<std::string>(); 
  v.version = j.at("version").get<std::string>(); 
  }
}