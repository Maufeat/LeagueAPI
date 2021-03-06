#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginResourceContract { 
    std::string fullName;
    std::string version; 
  };
  inline void to_json(json& j, const PluginResourceContract& v) {
    j["fullName"] = v.fullName; 
    j["version"] = v.version; 
  }
  inline void from_json(const json& j, PluginResourceContract& v) {
    v.fullName = j.at("fullName").get<std::string>(); 
    v.version = j.at("version").get<std::string>(); 
  }
}