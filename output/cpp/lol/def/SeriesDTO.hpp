#pragma once
#include "../base_def.hpp" 
#include "SeriesMediaDTO.hpp"
#include "SeriesAlertDTO.hpp"
namespace lol {
  struct SeriesDTO { 
    int64_t startDate;
    SeriesMediaDTO media;
    std::string internalName;
    std::vector<SeriesAlertDTO> warnings;
    int64_t endDate;
    std::string title;
    std::string parentName;
    std::string description;
    std::vector<std::string> tags;
    std::string id; 
  };
  inline void to_json(json& j, const SeriesDTO& v) {
    j["startDate"] = v.startDate; 
    j["media"] = v.media; 
    j["internalName"] = v.internalName; 
    j["warnings"] = v.warnings; 
    j["endDate"] = v.endDate; 
    j["title"] = v.title; 
    j["parentName"] = v.parentName; 
    j["description"] = v.description; 
    j["tags"] = v.tags; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, SeriesDTO& v) {
    v.startDate = j.at("startDate").get<int64_t>(); 
    v.media = j.at("media").get<SeriesMediaDTO>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO>>(); 
    v.endDate = j.at("endDate").get<int64_t>(); 
    v.title = j.at("title").get<std::string>(); 
    v.parentName = j.at("parentName").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}