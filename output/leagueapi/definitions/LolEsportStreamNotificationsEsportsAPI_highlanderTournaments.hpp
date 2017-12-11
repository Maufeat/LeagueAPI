#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp>"
#include "<leagueapi/definitions/LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp>"

namespace leagueapi {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments { /**/ 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets> brackets;/**/
    std::string title;/**/
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters> rosters;/**/
    std::string id;/**/
    std::string description;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) { 
    j["brackets"] = v.brackets;
    j["title"] = v.title;
    j["rosters"] = v.rosters;
    j["id"] = v.id;
    j["description"] = v.description;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) { 
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets>>(); 
    v.title = j.at("title").get<std::string>(); 
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
  }
} 