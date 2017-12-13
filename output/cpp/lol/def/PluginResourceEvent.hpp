#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginResourceEventType.hpp>
namespace lol {
  struct PluginResourceEvent { 
    std::string uri;
    PluginResourceEventType eventType;
    json data; 
  };
  void to_json(json& j, const PluginResourceEvent& v) {
  j["uri"] = v.uri; 
  j["eventType"] = v.eventType; 
  j["data"] = v.data; 
  }
  void from_json(const json& j, PluginResourceEvent& v) {
  v.uri = j.at("uri").get<std::string>(); 
  v.eventType = j.at("eventType").get<PluginResourceEventType>(); 
  v.data = j.at("data").get<json>(); 
  }
}