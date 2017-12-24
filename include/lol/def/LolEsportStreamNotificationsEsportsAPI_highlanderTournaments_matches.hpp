#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster.hpp"
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches { 
    std::string id;
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster> input; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) {
    j["id"] = v.id; 
    j["input"] = v.input; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) {
    v.id = j.at("id").get<std::string>(); 
    v.input = j.at("input").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster>>(); 
  }
}