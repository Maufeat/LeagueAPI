#pragma once
#include "../base_def.hpp" 
#include "MetricMetadataNotify.hpp"
namespace lol {
  struct MetricMetadataAlert { 
    std::string pretty_name;
    double max;
    std::string description;
    double min;
    MetricMetadataNotify notify;
    std::string level;
    std::string info; 
  };
  inline void to_json(json& j, const MetricMetadataAlert& v) {
    j["pretty_name"] = v.pretty_name; 
    j["max"] = v.max; 
    j["description"] = v.description; 
    j["min"] = v.min; 
    j["notify"] = v.notify; 
    j["level"] = v.level; 
    j["info"] = v.info; 
  }
  inline void from_json(const json& j, MetricMetadataAlert& v) {
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.max = j.at("max").get<double>(); 
    v.description = j.at("description").get<std::string>(); 
    v.min = j.at("min").get<double>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.level = j.at("level").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
  }
}