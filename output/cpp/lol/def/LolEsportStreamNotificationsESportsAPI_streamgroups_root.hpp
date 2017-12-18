#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsEsportsAPI_teams.hpp"
#include "LolEsportStreamNotificationsESportsAPI_streamgroups.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments.hpp"
namespace lol {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups_root { 
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments> highlanderTournaments;
    std::vector<LolEsportStreamNotificationsEsportsAPI_teams> teams;
    std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups> streamgroups; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) {
    j["highlanderTournaments"] = v.highlanderTournaments; 
    j["teams"] = v.teams; 
    j["streamgroups"] = v.streamgroups; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsAPI_streamgroups_root& v) {
    v.highlanderTournaments = j.at("highlanderTournaments").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments>>(); 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsEsportsAPI_teams>>(); 
    v.streamgroups = j.at("streamgroups").get<std::vector<LolEsportStreamNotificationsESportsAPI_streamgroups>>(); 
  }
}