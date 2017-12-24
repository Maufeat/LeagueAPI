#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace lol {
  struct LolEsportStreamNotificationsLiveMatch { 
    std::string id;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam> teams;
    std::string streamGroup;
    std::string tournamentDescription;
    std::string title; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsLiveMatch& v) {
    j["id"] = v.id; 
    j["teams"] = v.teams; 
    j["streamGroup"] = v.streamGroup; 
    j["tournamentDescription"] = v.tournamentDescription; 
    j["title"] = v.title; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsLiveMatch& v) {
    v.id = j.at("id").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam>>(); 
    v.streamGroup = j.at("streamGroup").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
  }
}