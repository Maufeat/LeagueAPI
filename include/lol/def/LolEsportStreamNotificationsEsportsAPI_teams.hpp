#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_teams { 
    std::string name;
    std::string acronym;
    std::string logoUrl;
    int64_t id;
    std::string slug;
    std::string guid; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_teams& v) {
    j["name"] = v.name; 
    j["acronym"] = v.acronym; 
    j["logoUrl"] = v.logoUrl; 
    j["id"] = v.id; 
    j["slug"] = v.slug; 
    j["guid"] = v.guid; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_teams& v) {
    v.name = j.at("name").get<std::string>(); 
    v.acronym = j.at("acronym").get<std::string>(); 
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.slug = j.at("slug").get<std::string>(); 
    v.guid = j.at("guid").get<std::string>(); 
  }
}