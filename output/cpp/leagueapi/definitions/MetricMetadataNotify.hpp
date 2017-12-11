#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MetricMetadataHipchatNotification.hpp>
#include <leagueapi/definitions/MetricMetadataPagerDutyNotification.hpp>

namespace leagueapi {
  struct MetricMetadataNotify { /**/ 
    std::vector<MetricMetadataHipchatNotification> hipchat;/**/
    std::vector<MetricMetadataPagerDutyNotification> pagerduty;/**/
    std::vector<std::string> email;/**/
  };
  static void to_json(json& j, const MetricMetadataNotify& v) { 
    j["hipchat"] = v.hipchat;
    j["pagerduty"] = v.pagerduty;
    j["email"] = v.email;
  }
  static void from_json(const json& j, MetricMetadataNotify& v) { 
    v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>(); 
    v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>(); 
    v.email = j.at("email").get<std::vector<std::string>>(); 
  }
} 