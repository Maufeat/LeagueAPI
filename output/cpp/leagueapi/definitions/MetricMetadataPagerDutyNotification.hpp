#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct MetricMetadataPagerDutyNotification { /**/ 
    std::string apikey;/**/
  };
  static void to_json(json& j, const MetricMetadataPagerDutyNotification& v) { 
    j["apikey"] = v.apikey;
  }
  static void from_json(const json& j, MetricMetadataPagerDutyNotification& v) { 
    v.apikey = j.at("apikey").get<std::string>(); 
  }
} 