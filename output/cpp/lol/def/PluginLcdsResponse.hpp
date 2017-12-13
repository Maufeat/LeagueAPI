#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginLcdsResponse { 
    std::string typeName;
    json body; 
  };
  void to_json(json& j, const PluginLcdsResponse& v) {
  j["typeName"] = v.typeName; 
  j["body"] = v.body; 
  }
  void from_json(const json& j, PluginLcdsResponse& v) {
  v.typeName = j.at("typeName").get<std::string>(); 
  v.body = j.at("body").get<json>(); 
  }
}