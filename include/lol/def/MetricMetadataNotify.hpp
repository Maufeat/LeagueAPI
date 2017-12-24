#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataHipchatNotification.hpp"
#include "MetricMetadataPagerDutyNotification.hpp"
namespace lol {
  struct MetricMetadataNotify { 
    std::vector<std::string> email;
    std::vector<MetricMetadataHipchatNotification> hipchat;
    std::vector<MetricMetadataPagerDutyNotification> pagerduty; 
  };
  inline void to_json(json& j, const MetricMetadataNotify& v) {
    j["email"] = v.email; 
    j["hipchat"] = v.hipchat; 
    j["pagerduty"] = v.pagerduty; 
  }
  inline void from_json(const json& j, MetricMetadataNotify& v) {
    v.email = j.at("email").get<std::vector<std::string>>(); 
    v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>(); 
    v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>(); 
  }
}