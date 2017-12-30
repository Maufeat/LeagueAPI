#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MetricMetadataHipchatNotification { 
    std::string tags;
    std::string roomid; 
  };
  inline void to_json(json& j, const MetricMetadataHipchatNotification& v) {
    j["tags"] = v.tags; 
    j["roomid"] = v.roomid; 
  }
  inline void from_json(const json& j, MetricMetadataHipchatNotification& v) {
    v.tags = j.at("tags").get<std::string>(); 
    v.roomid = j.at("roomid").get<std::string>(); 
  }
}