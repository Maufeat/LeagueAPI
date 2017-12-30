#pragma once
#include "../base_def.hpp" 
#include "SeriesMediaDTO.hpp"
#include "SeriesAlertDTO.hpp"
namespace lol {
  struct SeriesDTO { 
    std::vector<SeriesAlertDTO> warnings;
    std::string id;
    std::vector<std::string> tags;
    SeriesMediaDTO media;
    std::string description;
    int64_t endDate;
    std::string parentName;
    std::string title;
    std::string internalName;
    int64_t startDate; 
  };
  inline void to_json(json& j, const SeriesDTO& v) {
    j["warnings"] = v.warnings; 
    j["id"] = v.id; 
    j["tags"] = v.tags; 
    j["media"] = v.media; 
    j["description"] = v.description; 
    j["endDate"] = v.endDate; 
    j["parentName"] = v.parentName; 
    j["title"] = v.title; 
    j["internalName"] = v.internalName; 
    j["startDate"] = v.startDate; 
  }
  inline void from_json(const json& j, SeriesDTO& v) {
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.media = j.at("media").get<SeriesMediaDTO>(); 
    v.description = j.at("description").get<std::string>(); 
    v.endDate = j.at("endDate").get<int64_t>(); 
    v.parentName = j.at("parentName").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.startDate = j.at("startDate").get<int64_t>(); 
  }
}