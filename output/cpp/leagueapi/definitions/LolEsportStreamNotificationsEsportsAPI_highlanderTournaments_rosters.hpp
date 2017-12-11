#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters { /**/ 
    int64_t team;/**/
    std::string id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) { 
    j["team"] = v.team;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) { 
    v.team = j.at("team").get<int64_t>(); 
    v.id = j.at("id").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 