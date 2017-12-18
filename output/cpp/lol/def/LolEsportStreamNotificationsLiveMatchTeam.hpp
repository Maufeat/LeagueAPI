#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsLiveMatchTeam { 
    std::string logoUrl;
    std::string name;
    std::string guid;
    std::string acronym; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsLiveMatchTeam& v) {
    j["logoUrl"] = v.logoUrl; 
    j["name"] = v.name; 
    j["guid"] = v.guid; 
    j["acronym"] = v.acronym; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsLiveMatchTeam& v) {
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.guid = j.at("guid").get<std::string>(); 
    v.acronym = j.at("acronym").get<std::string>(); 
  }
}