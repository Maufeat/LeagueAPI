#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters { 
    std::string name;
    int64_t team;
    std::string id; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) {
  j["name"] = v.name; 
  j["team"] = v.team; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsEsportsAPI_highlanderTournaments_rosters& v) {
  v.name = j.at("name").get<std::string>(); 
  v.team = j.at("team").get<int64_t>(); 
  v.id = j.at("id").get<std::string>(); 
  }
}