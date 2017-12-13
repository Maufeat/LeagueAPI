#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginResourceEventType.hpp>
namespace lol {
  struct PluginResourceEvent { 
    PluginResourceEventType eventType;
    std::string uri;
    json data; 
  };
  void to_json(json& j, const PluginResourceEvent& v) {
  j["eventType"] = v.eventType; 
  j["uri"] = v.uri; 
  j["data"] = v.data; 
  }
  void from_json(const json& j, PluginResourceEvent& v) {
  v.eventType = j.at("eventType").get<PluginResourceEventType>(); 
  v.uri = j.at("uri").get<std::string>(); 
  v.data = j.at("data").get<json>(); 
  }
}