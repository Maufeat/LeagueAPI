#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginLcdsResponse { 
    json body;
    std::string typeName; 
  };
  void to_json(json& j, const PluginLcdsResponse& v) {
    j["body"] = v.body; 
    j["typeName"] = v.typeName; 
  }
  void from_json(const json& j, PluginLcdsResponse& v) {
    v.body = j.at("body").get<json>(); 
    v.typeName = j.at("typeName").get<std::string>(); 
  }
}