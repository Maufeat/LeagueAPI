#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataHipchatNotification.hpp"
#include "MetricMetadataPagerDutyNotification.hpp"
namespace lol {
  struct MetricMetadataNotify { 
    std::vector<MetricMetadataPagerDutyNotification> pagerduty;
    std::vector<std::string> email;
    std::vector<MetricMetadataHipchatNotification> hipchat; 
  };
  inline void to_json(json& j, const MetricMetadataNotify& v) {
    j["pagerduty"] = v.pagerduty; 
    j["email"] = v.email; 
    j["hipchat"] = v.hipchat; 
  }
  inline void from_json(const json& j, MetricMetadataNotify& v) {
    v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>(); 
    v.email = j.at("email").get<std::vector<std::string>>(); 
    v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>(); 
  }
}