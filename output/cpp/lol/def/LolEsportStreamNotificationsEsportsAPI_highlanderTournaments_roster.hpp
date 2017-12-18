#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster { 
    std::string roster; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster& v) {
    j["roster"] = v.roster; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster& v) {
    v.roster = j.at("roster").get<std::string>(); 
  }
}