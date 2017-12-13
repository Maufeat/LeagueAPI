#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginLcdsEvent { 
    json body;
    std::string subtopic;
    std::string clientId;
    std::string typeName; 
  };
  void to_json(json& j, const PluginLcdsEvent& v) {
    j["body"] = v.body; 
    j["subtopic"] = v.subtopic; 
    j["clientId"] = v.clientId; 
    j["typeName"] = v.typeName; 
  }
  void from_json(const json& j, PluginLcdsEvent& v) {
    v.body = j.at("body").get<json>(); 
    v.subtopic = j.at("subtopic").get<std::string>(); 
    v.clientId = j.at("clientId").get<std::string>(); 
    v.typeName = j.at("typeName").get<std::string>(); 
  }
}