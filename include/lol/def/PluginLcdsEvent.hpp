#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginLcdsEvent { 
    json body;
    std::string typeName;
    std::string clientId;
    std::string subtopic; 
  };
  inline void to_json(json& j, const PluginLcdsEvent& v) {
    j["body"] = v.body; 
    j["typeName"] = v.typeName; 
    j["clientId"] = v.clientId; 
    j["subtopic"] = v.subtopic; 
  }
  inline void from_json(const json& j, PluginLcdsEvent& v) {
    v.body = j.at("body").get<json>(); 
    v.typeName = j.at("typeName").get<std::string>(); 
    v.clientId = j.at("clientId").get<std::string>(); 
    v.subtopic = j.at("subtopic").get<std::string>(); 
  }
}