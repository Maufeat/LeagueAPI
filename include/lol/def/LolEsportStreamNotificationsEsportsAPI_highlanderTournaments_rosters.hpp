#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters { 
    std::string id;
    int64_t team;
    std::string name; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) {
    j["id"] = v.id; 
    j["team"] = v.team; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) {
    v.id = j.at("id").get<std::string>(); 
    v.team = j.at("team").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}