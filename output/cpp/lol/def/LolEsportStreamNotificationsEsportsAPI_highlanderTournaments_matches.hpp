#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster.hpp>
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches { 
    std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster> input;
    std::string id; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) {
    j["input"] = v.input; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches& v) {
    v.input = j.at("input").get<std::vector<LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_roster>>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}