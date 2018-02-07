#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsLiveMatchTeam.hpp"
namespace lol {
  struct LolEsportStreamNotificationsLiveMatch { 
    std::string id;
    std::string streamGroup;
    std::string title;
    std::string tournamentDescription;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam> teams; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsLiveMatch& v) {
    j["id"] = v.id; 
    j["streamGroup"] = v.streamGroup; 
    j["title"] = v.title; 
    j["tournamentDescription"] = v.tournamentDescription; 
    j["teams"] = v.teams; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsLiveMatch& v) {
    v.id = j.at("id").get<std::string>(); 
    v.streamGroup = j.at("streamGroup").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam>>(); 
  }
}