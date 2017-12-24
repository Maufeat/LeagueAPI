#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments.hpp"
#include "LolEsportStreamNotificationsESportsAPI_streamgroups.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_teams.hpp"
namespace lol {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_root { 
    std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups> streamgroups;
    std::vector<LolEsportStreamNotificationsEsportsAPI_teams> teams;
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments> highlanderTournaments; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) {
    j["streamgroups"] = v.streamgroups; 
    j["teams"] = v.teams; 
    j["highlanderTournaments"] = v.highlanderTournaments; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) {
    v.streamgroups = j.at("streamgroups").get<std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups>>(); 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsEsportsAPI_teams>>(); 
    v.highlanderTournaments = j.at("highlanderTournaments").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments>>(); 
  }
}