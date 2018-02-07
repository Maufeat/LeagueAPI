#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PluginLcdsEvent { 
    std::string clientId;
    std::string subtopic;
    std::string typeName;
    json body; 
  };
  inline void to_json(json& j, const PluginLcdsEvent& v) {
    j["clientId"] = v.clientId; 
    j["subtopic"] = v.subtopic; 
    j["typeName"] = v.typeName; 
    j["body"] = v.body; 
  }
  inline void from_json(const json& j, PluginLcdsEvent& v) {
    v.clientId = j.at("clientId").get<std::string>(); 
    v.subtopic = j.at("subtopic").get<std::string>(); 
    v.typeName = j.at("typeName").get<std::string>(); 
    v.body = j.at("body").get<json>(); 
  }
}