#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches.hpp>
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets { 
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches> matches;
    std::string id; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) {
    j["matches"] = v.matches; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets& v) {
    v.matches = j.at("matches").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_matches>>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}