#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsLiveMatchTeam { 
    std::string guid;
    std::string name;
    std::string acronym;
    std::string logoUrl; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsLiveMatchTeam& v) {
    j["guid"] = v.guid; 
    j["name"] = v.name; 
    j["acronym"] = v.acronym; 
    j["logoUrl"] = v.logoUrl; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsLiveMatchTeam& v) {
    v.guid = j.at("guid").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.acronym = j.at("acronym").get<std::string>(); 
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
  }
}