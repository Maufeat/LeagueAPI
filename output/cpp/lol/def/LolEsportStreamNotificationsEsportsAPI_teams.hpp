#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_teams { 
    std::string logoUrl;
    std::string slug;
    std::string name;
    std::string guid;
    std::string acronym;
    int64_t id; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_teams& v) {
    j["logoUrl"] = v.logoUrl; 
    j["slug"] = v.slug; 
    j["name"] = v.name; 
    j["guid"] = v.guid; 
    j["acronym"] = v.acronym; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_teams& v) {
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
    v.slug = j.at("slug").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.guid = j.at("guid").get<std::string>(); 
    v.acronym = j.at("acronym").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}