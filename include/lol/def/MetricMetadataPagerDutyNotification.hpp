#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MetricMetadataPagerDutyNotification { 
    std::string apikey; 
  };
  inline void to_json(json& j, const MetricMetadataPagerDutyNotification& v) {
    j["apikey"] = v.apikey; 
  }
  inline void from_json(const json& j, MetricMetadataPagerDutyNotification& v) {
    v.apikey = j.at("apikey").get<std::string>(); 
  }
}