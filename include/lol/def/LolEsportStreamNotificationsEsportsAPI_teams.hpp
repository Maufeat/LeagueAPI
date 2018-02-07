#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_teams { 
    int64_t id;
    std::string guid;
    std::string slug;
    std::string name;
    std::string logoUrl;
    std::string acronym; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_teams& v) {
    j["id"] = v.id; 
    j["guid"] = v.guid; 
    j["slug"] = v.slug; 
    j["name"] = v.name; 
    j["logoUrl"] = v.logoUrl; 
    j["acronym"] = v.acronym; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_teams& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.guid = j.at("guid").get<std::string>(); 
    v.slug = j.at("slug").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
    v.acronym = j.at("acronym").get<std::string>(); 
  }
}