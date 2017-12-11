#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/SeriesMediaDTO.hpp>"
#include "<leagueapi/definitions/SeriesAlertDTO.hpp>"

namespace leagueapi {
  struct SeriesDTO { /**/ 
    std::string internalName;/**/
    std::string id;/**/
    int64_t startDate;/**/
    std::string description;/**/
    std::vector<std::string> tags;/**/
    std::string parentName;/**/
    std::string title;/**/
    SeriesMediaDTO media;/**/
    std::vector<SeriesAlertDTO> warnings;/**/
    int64_t endDate;/**/
  };
  static void to_json(json& j, const SeriesDTO& v) { 
    j["internalName"] = v.internalName;
    j["id"] = v.id;
    j["startDate"] = v.startDate;
    j["description"] = v.description;
    j["tags"] = v.tags;
    j["parentName"] = v.parentName;
    j["title"] = v.title;
    j["media"] = v.media;
    j["warnings"] = v.warnings;
    j["endDate"] = v.endDate;
  }
  static void from_json(const json& j, SeriesDTO& v) { 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.startDate = j.at("startDate").get<int64_t>(); 
    v.description = j.at("description").get<std::string>(); 
    v.tags = j.at("tags").get<std::vector<std::string>>(); 
    v.parentName = j.at("parentName").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.media = j.at("media").get<SeriesMediaDTO>(); 
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO>>(); 
    v.endDate = j.at("endDate").get<int64_t>(); 
  }
} 