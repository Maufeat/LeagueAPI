#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsLiveMatchTeam { 
    std::string acronym;
    std::string guid;
    std::string logoUrl;
    std::string name; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsLiveMatchTeam& v) {
    j["acronym"] = v.acronym; 
    j["guid"] = v.guid; 
    j["logoUrl"] = v.logoUrl; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsLiveMatchTeam& v) {
    v.acronym = j.at("acronym").get<std::string>(); 
    v.guid = j.at("guid").get<std::string>(); 
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}