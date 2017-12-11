#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolEsportStreamNotificationsLiveMatchTeam.hpp>

namespace leagueapi {
  struct LolEsportStreamNotificationsLiveMatch { /**/ 
    std::vector<LolEsportStreamNotificationsLiveMatchTeam> teams;/**/
    std::string title;/**/
    std::string id;/**/
    std::string tournamentDescription;/**/
    std::string streamGroup;/**/
  };
  static void to_json(json& j, const LolEsportStreamNotificationsLiveMatch& v) { 
    j["teams"] = v.teams;
    j["title"] = v.title;
    j["id"] = v.id;
    j["tournamentDescription"] = v.tournamentDescription;
    j["streamGroup"] = v.streamGroup;
  }
  static void from_json(const json& j, LolEsportStreamNotificationsLiveMatch& v) { 
    v.teams = j.at("teams").get<std::vector<LolEsportStreamNotificationsLiveMatchTeam>>(); 
    v.title = j.at("title").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.tournamentDescription = j.at("tournamentDescription").get<std::string>(); 
    v.streamGroup = j.at("streamGroup").get<std::string>(); 
  }
} 