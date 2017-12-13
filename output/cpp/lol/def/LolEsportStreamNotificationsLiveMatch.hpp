#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEsportStreamNotificationsLiveMatchTeam.hpp>
namespace lol {
  struct LolEsportStreamNotificationsLiveMatch { 
    std::string tournamentDescription;
    std::string streamGroup;
    std::string title;
    std::vector<LolEsportStreamNotificationsLiveMatchTeam> teams;
    std::string id; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsLiveMatch& v) {
    j["tournamentDescription"] = v.tournamentDescription; 
    j["streamGroup"] = v.streamGroup; 
    j["title"] = v.title; 
    j["teams"] = v.teams; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsLiveMatch& v) {
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.streamGroup = j.at("streamGroup").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam>>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}