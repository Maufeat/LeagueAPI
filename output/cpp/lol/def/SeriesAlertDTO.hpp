#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SeriesAlertDTO { 
    std::string title;
    std::string description;
    int64_t alertTime; 
  };
  void to_json(json& j, const SeriesAlertDTO& v) {
    j["title"] = v.title; 
    j["description"] = v.description; 
    j["alertTime"] = v.alertTime; 
  }
  void from_json(const json& j, SeriesAlertDTO& v) {
    v.title = j.at("title").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.alertTime = j.at("alertTime").get<int64_t>(); 
  }
}