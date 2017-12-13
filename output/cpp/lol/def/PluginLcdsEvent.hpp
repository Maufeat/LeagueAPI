#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PluginLcdsEvent { 
    std::string clientId;
    std::string typeName;
    json body;
    std::string subtopic; 
  };
  void to_json(json& j, const PluginLcdsEvent& v) {
  j["clientId"] = v.clientId; 
  j["typeName"] = v.typeName; 
  j["body"] = v.body; 
  j["subtopic"] = v.subtopic; 
  }
  void from_json(const json& j, PluginLcdsEvent& v) {
  v.clientId = j.at("clientId").get<std::string>(); 
  v.typeName = j.at("typeName").get<std::string>(); 
  v.body = j.at("body").get<json>(); 
  v.subtopic = j.at("subtopic").get<std::string>(); 
  }
}