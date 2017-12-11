#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/MetricDataType.hpp>"
#include "<leagueapi/definitions/AggregationType.hpp>"
#include "<leagueapi/definitions/MetricMetadataAlert.hpp>"
#include "<leagueapi/definitions/MetricPriority.hpp>"
#include "<leagueapi/definitions/MetricMetadataNotify.hpp>"
#include "<leagueapi/definitions/MetricType.hpp>"

namespace leagueapi {
  struct MetricMetadata { /**/ 
    uint32_t sample_window_ms;/**/
    MetricDataType data_type;/**/
    MetricPriority priority;/**/
    std::vector<MetricMetadataAlert> alerts;/**/
    std::string description;/**/
    std::string info;/**/
    std::string units;/**/
    std::string category;/**/
    MetricType type;/**/
    uint32_t period;/**/
    MetricMetadataNotify notify;/**/
    std::string pretty_name;/**/
    AggregationType transientAggregation;/**/
    std::string destination;/**/
  };
  static void to_json(json& j, const MetricMetadata& v) { 
    j["sample_window_ms"] = v.sample_window_ms;
    j["data_type"] = v.data_type;
    j["priority"] = v.priority;
    j["alerts"] = v.alerts;
    j["description"] = v.description;
    j["info"] = v.info;
    j["units"] = v.units;
    j["category"] = v.category;
    j["type"] = v.type;
    j["period"] = v.period;
    j["notify"] = v.notify;
    j["pretty_name"] = v.pretty_name;
    j["transientAggregation"] = v.transientAggregation;
    j["destination"] = v.destination;
  }
  static void from_json(const json& j, MetricMetadata& v) { 
    v.sample_window_ms = j.at("sample_window_ms").get<uint32_t>(); 
    v.data_type = j.at("data_type").get<MetricDataType>(); 
    v.priority = j.at("priority").get<MetricPriority>(); 
    v.alerts = j.at("alerts").get<std::vector<MetricMetadataAlert>>(); 
    v.description = j.at("description").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
    v.units = j.at("units").get<std::string>(); 
    v.category = j.at("category").get<std::string>(); 
    v.type = j.at("type").get<MetricType>(); 
    v.period = j.at("period").get<uint32_t>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.transientAggregation = j.at("transientAggregation").get<AggregationType>(); 
    v.destination = j.at("destination").get<std::string>(); 
  }
} 