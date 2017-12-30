#pragma once
#include "../base_def.hpp" 
#include "PluginResourceEventType.hpp"
namespace lol {
  struct PluginResourceEvent { 
    json data;
    PluginResourceEventType eventType;
    std::string uri; 
  };
  inline void to_json(json& j, const PluginResourceEvent& v) {
    j["data"] = v.data; 
    j["eventType"] = v.eventType; 
    j["uri"] = v.uri; 
  }
  inline void from_json(const json& j, PluginResourceEvent& v) {
    v.data = j.at("data").get<json>(); 
    v.eventType = j.at("eventType").get<PluginResourceEventType>(); 
    v.uri = j.at("uri").get<std::string>(); 
  }
}