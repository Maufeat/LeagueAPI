#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/MetricMetadataNotify.hpp>"

namespace leagueapi {
  struct MetricMetadataAlert { /**/ 
    std::string level;/**/
    std::string description;/**/
    MetricMetadataNotify notify;/**/
    std::string pretty_name;/**/
    double min;/**/
    std::string info;/**/
    double max;/**/
  };
  static void to_json(json& j, const MetricMetadataAlert& v) { 
    j["level"] = v.level;
    j["description"] = v.description;
    j["notify"] = v.notify;
    j["pretty_name"] = v.pretty_name;
    j["min"] = v.min;
    j["info"] = v.info;
    j["max"] = v.max;
  }
  static void from_json(const json& j, MetricMetadataAlert& v) { 
    v.level = j.at("level").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.notify = j.at("notify").get<MetricMetadataNotify>(); 
    v.pretty_name = j.at("pretty_name").get<std::string>(); 
    v.min = j.at("min").get<double>(); 
    v.info = j.at("info").get<std::string>(); 
    v.max = j.at("max").get<double>(); 
  }
} 