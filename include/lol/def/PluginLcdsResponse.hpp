#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginLcdsResponse { 
    std::string typeName;
    json body; 
  };
  inline void to_json(json& j, const PluginLcdsResponse& v) {
    j["typeName"] = v.typeName; 
    j["body"] = v.body; 
  }
  inline void from_json(const json& j, PluginLcdsResponse& v) {
    v.typeName = j.at("typeName").get<std::string>(); 
    v.body = j.at("body").get<json>(); 
  }
}