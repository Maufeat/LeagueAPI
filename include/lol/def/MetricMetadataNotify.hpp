#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataPagerDutyNotification.hpp"
#include "MetricMetadataHipchatNotification.hpp"
namespace lol {
  struct MetricMetadataNotify { 
    std::vector<std::string> email;
    std::vector<MetricMetadataPagerDutyNotification> pagerduty;
    std::vector<MetricMetadataHipchatNotification> hipchat; 
  };
  inline void to_json(json& j, const MetricMetadataNotify& v) {
    j["email"] = v.email; 
    j["pagerduty"] = v.pagerduty; 
    j["hipchat"] = v.hipchat; 
  }
  inline void from_json(const json& j, MetricMetadataNotify& v) {
    v.email = j.at("email").get<std::vector<std::string>>(); 
    v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>(); 
    v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>(); 
  }
}