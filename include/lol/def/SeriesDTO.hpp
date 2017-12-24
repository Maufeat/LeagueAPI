#pragma once
#include "../base_def.hpp" 
#include "SeriesAlertDTO.hpp"
#include "SeriesMediaDTO.hpp"
namespace lol {
  struct SeriesDTO { 
    std::string description;
    SeriesMediaDTO media;
    std::vector<std::string> tags;
    int64_t endDate;
    std::string title;
    std::string id;
    std::string internalName;
    std::vector<SeriesAlertDTO> warnings;
    int64_t startDate;
    std::string parentName; 
  };
  inline void to_json(json& j, const SeriesDTO& v) {
    j["description"] = v.description; 
    j["media"] = v.media; 
    j["tags"] = v.tags; 
    j["endDate"] = v.endDate; 
    j["title"] = v.title; 
    j["id"] = v.id; 
    j["internalName"] = v.internalName; 
    j["warnings"] = v.warnings; 
    j["startDate"] = v.startDate; 
    j["parentName"] = v.parentName; 
  }
  inline void from_json(const json& j, SeriesDTO& v) {
    v.description = j.at("description").get<std::string>(); 
    v.media = j.at("media").get<SeriesMediaDTO>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.endDate = j.at("endDate").get<int64_t>(); 
    v.title = j.at("title").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO>>(); 
    v.startDate = j.at("startDate").get<int64_t>(); 
    v.parentName = j.at("parentName").get<std::string>(); 
  }
}