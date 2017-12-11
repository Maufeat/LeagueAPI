#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_teams { /**/ 
    std::string acronym;/**/
    std::string logoUrl;/**/
    int64_t id;/**/
    std::string name;/**/
    std::string guid;/**/
    std::string slug;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_teams& v) { 
    j["acronym"] = v.acronym;
    j["logoUrl"] = v.logoUrl;
    j["id"] = v.id;
    j["name"] = v.name;
    j["guid"] = v.guid;
    j["slug"] = v.slug;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_teams& v) { 
    v.acronym = j.at("acronym").get<std::string>(); 
    v.logoUrl = j.at("logoUrl").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.guid = j.at("guid").get<std::string>(); 
    v.slug = j.at("slug").get<std::string>(); 
  }
} 