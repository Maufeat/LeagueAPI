#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_teams { 
    std::string slug;
    std::string name;
    int64_t id;
    std::string acronym;
    std::string guid;
    std::string logoUrl; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_teams& v) {
    j["slug"] = v.slug; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["acronym"] = v.acronym; 
    j["guid"] = v.guid; 
    j["logoUrl"] = v.logoUrl; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_teams& v) {
    v.slug = j.at("slug").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.acronym = j.at("acronym").get<std::string>(); 
    v.guid = j.at("guid").get<std::string>(); 
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
  }
}