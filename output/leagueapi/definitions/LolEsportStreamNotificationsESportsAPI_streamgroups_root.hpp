#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolEsportStreamNotificationsESportsAPI_streamgroups.hpp>"
#include "<leagueapi/definitions/LolEsportStreamNotificationsEsportsAPI_highlanderTournaments.hpp>"
#include "<leagueapi/definitions/LolEsportStreamNotificationsEsportsAPI_teams.hpp>"

namespace leagueapi {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_root { /**/ 
    std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups> streamgroups;/**/
    std::vector<LolEsportStreamNotificationsEsportsAPI_teams> teams;/**/
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments> highlanderTournaments;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) { 
    j["streamgroups"] = v.streamgroups;
    j["teams"] = v.teams;
    j["highlanderTournaments"] = v.highlanderTournaments;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) { 
    v.streamgroups = j.at("streamgroups").get<std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups>>(); 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsEsportsAPI_teams>>(); 
    v.highlanderTournaments = j.at("highlanderTournaments").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments>>(); 
  }
} 