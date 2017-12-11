#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches.hpp>"

namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets { /**/ 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches> matches;/**/
    std::string id;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) { 
    j["matches"] = v.matches;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) { 
    v.matches = j.at("matches").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches>>(); 
    v.id = j.at("id").get<std::string>(); 
  }
} 