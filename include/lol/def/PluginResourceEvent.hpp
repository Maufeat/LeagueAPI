#pragma once
#include "../base_def.hpp" 
#include "PluginResourceEventType.hpp"
namespace lol {
  struct PluginResourceEvent { 
    std::string uri;
    PluginResourceEventType eventType;
    json data; 
  };
  inline void to_json(json& j, const PluginResourceEvent& v) {
    j["uri"] = v.uri; 
    j["eventType"] = v.eventType; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, PluginResourceEvent& v) {
    v.uri = j.at("uri").get<std::string>(); 
    v.eventType = j.at("eventType").get<PluginResourceEventType>(); 
    v.data = j.at("data").get<json>(); 
  }
}