#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct SeriesAlertDTO { 
    std::string description;
    int64_t alertTime;
    std::string title; 
  };
  inline void to_json(json& j, const SeriesAlertDTO& v) {
    j["description"] = v.description; 
    j["alertTime"] = v.alertTime; 
    j["title"] = v.title; 
  }
  inline void from_json(const json& j, SeriesAlertDTO& v) {
    v.description = j.at("description").get<std::string>(); 
    v.alertTime = j.at("alertTime").get<int64_t>(); 
    v.title = j.at("title").get<std::string>(); 
  }
}