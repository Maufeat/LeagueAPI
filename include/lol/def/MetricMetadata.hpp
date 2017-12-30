#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataNotify.hpp"
#include "MetricMetadataAlert.hpp"
#include "MetricDataType.hpp"
#include "MetricPriority.hpp"
#include "MetricType.hpp"
#include "AggregationType.hpp"
namespace lol {
  struct MetricMetadata { 
    MetricPriority priority;
    std::string description;
    std::string category;
    MetricType type;
    MetricMetadataNotify notify;
    AggregationType transientAggregation;
    uint32_t period;
    std::string pretty_name;
    std::string info;
    MetricDataType data_type;
    std::string destination;
    uint32_t sample_window_ms;
    std::string units;
    std::vector<MetricMetadataAlert> alerts; 
  };
  inline void to_json(json& j, const MetricMetadata& v) {
    j["priority"] = v.priority; 
    j["description"] = v.description; 
    j["category"] = v.category; 
    j["type"] = v.type; 
    j["notify"] = v.notify; 
    j["transientAggregation"] = v.transientAggregation; 
    j["period"] = v.period; 
    j["pretty_name"] = v.pretty_name; 
    j["info"] = v.info; 
    j["data_type"] = v.data_type; 
    j["destination"] = v.destination; 
    j["sample_window_ms"] = v.sample_window_ms; 
    j["units"] = v.units; 
    j["alerts"] = v.alerts; 
  }
  inline void from_json(const json& j, MetricMetadata& v) {
    v.priority = j.at("priority").get<MetricPriority>(); 
    v.description = j.at("description").get<std::string>(); 
    v.category = j.at("category").get<std::string>(); 
    v.type = j.at("type").get<MetricType>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.transientAggregation = j.at("transientAggregation").get<AggregationType>(); 
    v.period = j.at("period").get<uint32_t>(); 
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
    v.data_type = j.at("data_type").get<MetricDataType>(); 
    v.destination = j.at("destination").get<std::string>(); 
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>(); 
    v.units = j.at("units").get<std::string>(); 
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert>>(); 
  }
}