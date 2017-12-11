#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster.hpp>

namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches { /**/ 
    std::string id;/**/
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster> input;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) { 
    j["id"] = v.id;
    j["input"] = v.input;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) { 
    v.id = j.at("id").get<std::string>(); 
    v.input = j.at("input").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster>>(); 
  }
} 