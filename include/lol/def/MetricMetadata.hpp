#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataAlert.hpp"
#include "MetricMetadataNotify.hpp"
#include "MetricType.hpp"
#include "AggregationType.hpp"
#include "MetricPriority.hpp"
#include "MetricDataType.hpp"
namespace lol {
  struct MetricMetadata { 
    uint32_t sample_window_ms;
    MetricType type;
    MetricDataType data_type;
    std::vector<MetricMetadataAlert> alerts;
    MetricMetadataNotify notify;
    std::string units;
    std::string pretty_name;
    std::string category;
    std::string description;
    std::string destination;
    std::string info;
    AggregationType transientAggregation;
    MetricPriority priority;
    uint32_t period; 
  };
  inline void to_json(json& j, const MetricMetadata& v) {
    j["sample_window_ms"] = v.sample_window_ms; 
    j["type"] = v.type; 
    j["data_type"] = v.data_type; 
    j["alerts"] = v.alerts; 
    j["notify"] = v.notify; 
    j["units"] = v.units; 
    j["pretty_name"] = v.pretty_name; 
    j["category"] = v.category; 
    j["description"] = v.description; 
    j["destination"] = v.destination; 
    j["info"] = v.info; 
    j["transientAggregation"] = v.transientAggregation; 
    j["priority"] = v.priority; 
    j["period"] = v.period; 
  }
  inline void from_json(const json& j, MetricMetadata& v) {
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>(); 
    v.type = j.at("type").get<MetricType>(); 
    v.data_type = j.at("data_type").get<MetricDataType>(); 
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert>>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.units = j.at("units").get<std::string>(); 
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.category = j.at("category").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.destination = j.at("destination").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
    v.transientAggregation = j.at("transientAggregation").get<AggregationType>(); 
    v.priority = j.at("priority").get<MetricPriority>(); 
    v.period = j.at("period").get<uint32_t>(); 
  }
}