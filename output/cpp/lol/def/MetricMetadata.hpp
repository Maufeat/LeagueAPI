#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MetricPriority.hpp>
#include <lol/def/MetricMetadataAlert.hpp>
#include <lol/def/MetricType.hpp>
#include <lol/def/MetricDataType.hpp>
#include <lol/def/MetricMetadataNotify.hpp>
#include <lol/def/AggregationType.hpp>
namespace lol {
  struct MetricMetadata { 
    uint32_t sample_window_ms;
    AggregationType transientAggregation;
    std::vector<MetricMetadataAlert> alerts;
    MetricPriority priority;
    std::string category;
    std::string pretty_name;
    std::string units;
    MetricMetadataNotify notify;
    MetricType type;
    std::string info;
    MetricDataType data_type;
    std::string destination;
    std::string description;
    uint32_t period; 
  };
  void to_json(json& j, const MetricMetadata& v) {
  j["sample_window_ms"] = v.sample_window_ms; 
  j["transientAggregation"] = v.transientAggregation; 
  j["alerts"] = v.alerts; 
  j["priority"] = v.priority; 
  j["category"] = v.category; 
  j["pretty_name"] = v.pretty_name; 
  j["units"] = v.units; 
  j["notify"] = v.notify; 
  j["type"] = v.type; 
  j["info"] = v.info; 
  j["data_type"] = v.data_type; 
  j["destination"] = v.destination; 
  j["description"] = v.description; 
  j["period"] = v.period; 
  }
  void from_json(const json& j, MetricMetadata& v) {
  v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>(); 
  v.transientAggregation = j.at("transientAggregation").get<AggregationType>(); 
  v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert>>(); 
  v.priority = j.at("priority").get<MetricPriority>(); 
  v.category = j.at("category").get<std::string>(); 
  v.pretty_name = j.at("pretty_name").get<std::string>(); 
  v.units = j.at("units").get<std::string>(); 
  v.notify = j.at("notify").get<MetricMetadataNotify>(); 
  v.type = j.at("type").get<MetricType>(); 
  v.info = j.at("info").get<std::string>(); 
  v.data_type = j.at("data_type").get<MetricDataType>(); 
  v.destination = j.at("destination").get<std::string>(); 
  v.description = j.at("description").get<std::string>(); 
  v.period = j.at("period").get<uint32_t>(); 
  }
}