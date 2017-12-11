#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MetricMetadataHipchatNotification { /**/ 
    std::string roomid;/**/
    std::string tags;/**/
  };
  static void to_json(json& j, const MetricMetadataHipchatNotification& v) { 
    j["roomid"] = v.roomid;
    j["tags"] = v.tags;
  }
  static void from_json(const json& j, MetricMetadataHipchatNotification& v) { 
    v.roomid = j.at("roomid").get<std::string>(); 
    v.tags = j.at("tags").get<std::string>(); 
  }
} 