#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MetricMetadataPagerDutyNotification.hpp>
#include <lol/def/MetricMetadataHipchatNotification.hpp>
namespace lol {
  struct MetricMetadataNotify { 
    std::vector<MetricMetadataHipchatNotification> hipchat;
    std::vector<MetricMetadataPagerDutyNotification> pagerduty;
    std::vector<std::string> email; 
  };
  void to_json(json& j, const MetricMetadataNotify& v) {
  j["hipchat"] = v.hipchat; 
  j["pagerduty"] = v.pagerduty; 
  j["email"] = v.email; 
  }
  void from_json(const json& j, MetricMetadataNotify& v) {
  v.hipchat = j.at("hipchat").get<std::vector<MetricMetadataHipchatNotification>>(); 
  v.pagerduty = j.at("pagerduty").get<std::vector<MetricMetadataPagerDutyNotification>>(); 
  v.email = j.at("email").get<std::vector<std::string>>(); 
  }
}