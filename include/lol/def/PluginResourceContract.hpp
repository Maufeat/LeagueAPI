#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginResourceContract { 
    std::string version;
    std::string fullName; 
  };
  inline void to_json(json& j, const PluginResourceContract& v) {
    j["version"] = v.version; 
    j["fullName"] = v.fullName; 
  }
  inline void from_json(const json& j, PluginResourceContract& v) {
    v.version = j.at("version").get<std::string>(); 
    v.fullName = j.at("fullName").get<std::string>(); 
  }
}