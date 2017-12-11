#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster { /**/ 
    std::string roster;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster& v) { 
    j["roster"] = v.roster;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster& v) { 
    v.roster = j.at("roster").get<std::string>(); 
  }
} 