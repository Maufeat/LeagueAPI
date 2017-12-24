#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataNotify.hpp"
namespace lol {
  struct MetricMetadataAlert { 
    std::string pretty_name;
    std::string info;
    MetricMetadataNotify notify;
    std::string description;
    double min;
    double max;
    std::string level; 
  };
  inline void to_json(json& j, const MetricMetadataAlert& v) {
    j["pretty_name"] = v.pretty_name; 
    j["info"] = v.info; 
    j["notify"] = v.notify; 
    j["description"] = v.description; 
    j["min"] = v.min; 
    j["max"] = v.max; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, MetricMetadataAlert& v) {
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.description = j.at("description").get<std::string>(); 
    v.min = j.at("min").get<double>(); 
    v.max = j.at("max").get<double>(); 
    v.level = j.at("level").get<std::string>(); 
  }
}