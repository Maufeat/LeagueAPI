#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp"
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments { 
    std::string id;
    std::string description;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters> rosters;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets> brackets;
    std::string title; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["rosters"] = v.rosters; 
    j["brackets"] = v.brackets; 
    j["title"] = v.title; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    v.id = j.at("id").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters>>(); 
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets>>(); 
    v.title = j.at("title").get<std::string>(); 
  }
}