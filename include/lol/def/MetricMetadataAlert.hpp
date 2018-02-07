#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataNotify.hpp"
namespace lol {
  struct MetricMetadataAlert { 
    std::string level;
    double min;
    double max;
    MetricMetadataNotify notify;
    std::string pretty_name;
    std::string description;
    std::string info; 
  };
  inline void to_json(json& j, const MetricMetadataAlert& v) {
    j["level"] = v.level; 
    j["min"] = v.min; 
    j["max"] = v.max; 
    j["notify"] = v.notify; 
    j["pretty_name"] = v.pretty_name; 
    j["description"] = v.description; 
    j["info"] = v.info; 
  }
  inline void from_json(const json& j, MetricMetadataAlert& v) {
    v.level = j.at("level").get<std::string>(); 
    v.min = j.at("min").get<double>(); 
    v.max = j.at("max").get<double>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
  }
}