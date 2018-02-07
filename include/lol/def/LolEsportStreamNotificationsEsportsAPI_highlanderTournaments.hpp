#pragma once
#include "../base_def.hpp" 
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters.hpp"
#include "LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets.hpp"
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments { 
    std::string id;
    std::string description;
    std::string title;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets> brackets;
    std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters> rosters; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["title"] = v.title; 
    j["brackets"] = v.brackets; 
    j["rosters"] = v.rosters; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments& v) {
    v.id = j.at("id").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.brackets = j.at("brackets").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_brackets>>(); 
    v.rosters = j.at("rosters").get<std::map<std::string, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters>>(); 
  }
}