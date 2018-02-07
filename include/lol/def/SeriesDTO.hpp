#pragma once
#include "../base_def.hpp" 
#include "SeriesMediaDTO.hpp"
#include "AlertDTO.hpp"
namespace lol {
  struct SeriesDTO { 
    std::string id;
    std::string internalName;
    std::string parentName;
    std::string type;
    std::string title;
    std::string description;
    std::string optInButtonText;
    std::string optOutButtonText;
    std::string status;
    int64_t startDate;
    int64_t endDate;
    int64_t createdDate;
    int64_t lastUpdatedTimestamp;
    bool viewed;
    SeriesMediaDTO media;
    std::vector<std::string> tags;
    std::vector<AlertDTO> warnings; 
  };
  inline void to_json(json& j, const SeriesDTO& v) {
    j["id"] = v.id; 
    j["internalName"] = v.internalName; 
    j["parentName"] = v.parentName; 
    j["type"] = v.type; 
    j["title"] = v.title; 
    j["description"] = v.description; 
    j["optInButtonText"] = v.optInButtonText; 
    j["optOutButtonText"] = v.optOutButtonText; 
    j["status"] = v.status; 
    j["startDate"] = v.startDate; 
    j["endDate"] = v.endDate; 
    j["createdDate"] = v.createdDate; 
    j["lastUpdatedTimestamp"] = v.lastUpdatedTimestamp; 
    j["viewed"] = v.viewed; 
    j["media"] = v.media; 
    j["tags"] = v.tags; 
    j["warnings"] = v.warnings; 
  }
  inline void from_json(const json& j, SeriesDTO& v) {
    v.id = j.at("id").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.parentName = j.at("parentName").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.optInButtonText = j.at("optInButtonText").get<std::string>(); 
    v.optOutButtonText = j.at("optOutButtonText").get<std::string>(); 
    v.status = j.at("status").get<std::string>(); 
    v.startDate = j.at("startDate").get<int64_t>(); 
    v.endDate = j.at("endDate").get<int64_t>(); 
    v.createdDate = j.at("createdDate").get<int64_t>(); 
    v.lastUpdatedTimestamp = j.at("lastUpdatedTimestamp").get<int64_t>(); 
    v.viewed = j.at("viewed").get<bool>(); 
    v.media = j.at("media").get<SeriesMediaDTO>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.warnings = j.at("warnings").get<std::vector<AlertDTO>>(); 
  }
}