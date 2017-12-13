#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MetricMetadataHipchatNotification.hpp>
#include <lol/def/MetricMetadataPagerDutyNotification.hpp>
namespace lol {
  struct MetricMetadataNotify { 
    std::vector<MetricMetadataPagerDutyNotification> pagerduty;
    std::vector<std::string> email;
    std::vector<MetricMetadataHipchatNotification> hipchat; 
  };
  void to_json(json& j, const MetricMetadataNotify& v) {
  j["pagerduty"] = v.pagerduty; 
  j["email"] = v.email; 
  j["hipchat"] = v.hipchat; 
  }
  void from_json(const json& j, MetricMetadataNotify& v) {
  v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>(); 
  v.email = j.at("email").get<std::vector<std::string>>(); 
  v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>(); 
  }
}