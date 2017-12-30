#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace lol {
  struct LolEsportStreamNotificationsLiveMatch { 
    std::string streamGroup;
    std::string tournamentDescription;
    std::string id;
    std::string title;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam> teams; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsLiveMatch& v) {
    j["streamGroup"] = v.streamGroup; 
    j["tournamentDescription"] = v.tournamentDescription; 
    j["id"] = v.id; 
    j["title"] = v.title; 
    j["teams"] = v.teams; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsLiveMatch& v) {
    v.streamGroup = j.at("streamGroup").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam>>(); 
  }
}