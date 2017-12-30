#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SeriesAlertDTO { 
    int64_t alertTime;
    std::string description;
    std::string title; 
  };
  inline void to_json(json& j, const SeriesAlertDTO& v) {
    j["alertTime"] = v.alertTime; 
    j["description"] = v.description; 
    j["title"] = v.title; 
  }
  inline void from_json(const json& j, SeriesAlertDTO& v) {
    v.alertTime = j.at("alertTime").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
  }
}