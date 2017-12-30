#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsLiveMatchTeam { 
    std::string name;
    std::string acronym;
    std::string logoUrl;
    std::string guid; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsLiveMatchTeam& v) {
    j["name"] = v.name; 
    j["acronym"] = v.acronym; 
    j["logoUrl"] = v.logoUrl; 
    j["guid"] = v.guid; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsLiveMatchTeam& v) {
    v.name = j.at("name").get<std::string>(); 
    v.acronym = j.at("acronym").get<std::string>(); 
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
    v.guid = j.at("guid").get<std::string>(); 
  }
}