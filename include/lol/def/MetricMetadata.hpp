#pragma once
#include "../base_def.hpp" 
#include "MetricPriority.hpp"
#include "AggregationType.hpp"
#include "MetricType.hpp"
#include "MetricMetadataAlert.hpp"
#include "MetricMetadataNotify.hpp"
#include "MetricDataType.hpp"
namespace lol {
  struct MetricMetadata { 
    std::vector<MetricMetadataAlert> alerts;
    uint32_t sample_window_ms;
    AggregationType transientAggregation;
    MetricDataType data_type;
    std::string category;
    std::string pretty_name;
    std::string info;
    MetricMetadataNotify notify;
    std::string description;
    std::string units;
    MetricType type;
    std::string destination;
    uint32_t period;
    MetricPriority priority; 
  };
  inline void to_json(json& j, const MetricMetadata& v) {
    j["alerts"] = v.alerts; 
    j["sample_window_ms"] = v.sample_window_ms; 
    j["transientAggregation"] = v.transientAggregation; 
    j["data_type"] = v.data_type; 
    j["category"] = v.category; 
    j["pretty_name"] = v.pretty_name; 
    j["info"] = v.info; 
    j["notify"] = v.notify; 
    j["description"] = v.description; 
    j["units"] = v.units; 
    j["type"] = v.type; 
    j["destination"] = v.destination; 
    j["period"] = v.period; 
    j["priority"] = v.priority; 
  }
  inline void from_json(const json& j, MetricMetadata& v) {
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert>>(); 
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>(); 
    v.transientAggregation = j.at("transientAggregation").get<AggregationType>(); 
    v.data_type = j.at("data_type").get<MetricDataType>(); 
    v.category = j.at("category").get<std::string>(); 
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.description = j.at("description").get<std::string>(); 
    v.units = j.at("units").get<std::string>(); 
    v.type = j.at("type").get<MetricType>(); 
    v.destination = j.at("destination").get<std::string>(); 
    v.period = j.at("period").get<uint32_t>(); 
    v.priority = j.at("priority").get<MetricPriority>(); 
  }
}