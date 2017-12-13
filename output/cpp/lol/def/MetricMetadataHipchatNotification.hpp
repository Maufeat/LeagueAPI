#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MetricMetadataHipchatNotification { 
    std::string roomid;
    std::string tags; 
  };
  void to_json(json& j, const MetricMetadataHipchatNotification& v) {
    j["roomid"] = v.roomid; 
    j["tags"] = v.tags; 
  }
  void from_json(const json& j, MetricMetadataHipchatNotification& v) {
    v.roomid = j.at("roomid").get<std::string>(); 
    v.tags = j.at("tags").get<std::string>(); 
  }
}