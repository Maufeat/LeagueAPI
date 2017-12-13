#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MetricMetadataNotify.hpp>
namespace lol {
  struct MetricMetadataAlert { 
    MetricMetadataNotify notify;
    std::string level;
    std::string info;
    double min;
    std::string description;
    std::string pretty_name;
    double max; 
  };
  void to_json(json& j, const MetricMetadataAlert& v) {
    j["notify"] = v.notify; 
    j["level"] = v.level; 
    j["info"] = v.info; 
    j["min"] = v.min; 
    j["description"] = v.description; 
    j["pretty_name"] = v.pretty_name; 
    j["max"] = v.max; 
  }
  void from_json(const json& j, MetricMetadataAlert& v) {
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.level = j.at("level").get<std::string>(); 
    v.info = j.at("info").get<std::string>(); 
    v.min = j.at("min").get<double>(); 
    v.description = j.at("description").get<std::string>(); 
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.max = j.at("max").get<double>(); 
  }
}