#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/PluginResourceEventType.hpp>"

namespace leagueapi {
  struct PluginResourceEvent { /**/ 
    std::string uri;/**/
    PluginResourceEventType eventType;/**/
    json data;/**/
  };
  static void to_json(json& j, const PluginResourceEvent& v) { 
    j["uri"] = v.uri;
    j["eventType"] = v.eventType;
    j["data"] = v.data;
  }
  static void from_json(const json& j, PluginResourceEvent& v) { 
    v.uri = j.at("uri").get<std::string>(); 
    v.eventType = j.at("eventType").get<PluginResourceEventType>(); 
    v.data = j.at("data").get<json>(); 
  }
} 