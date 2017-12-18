#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLeaguesLeagueEmblem {  
    FRESHBLOOD_e = 2,
    HOTSTREAK_e = 1,
    VETERAN_e = 0,
  };
  inline void to_json(json& j, const LolLeaguesLeagueEmblem& v) {
    if(v == LolLeaguesLeagueEmblem::FRESHBLOOD_e) {
      j = "FRESHBLOOD";
      return;
    }
    if(v == LolLeaguesLeagueEmblem::HOTSTREAK_e) {
      j = "HOTSTREAK";
      return;
    }
    if(v == LolLeaguesLeagueEmblem::VETERAN_e) {
      j = "VETERAN";
      return;
    }
  }
  inline void from_json(const json& j, LolLeaguesLeagueEmblem& v) {
    if(j.get<std::string>() == "FRESHBLOOD") {
      v = LolLeaguesLeagueEmblem::FRESHBLOOD_e;
      return;
    } 
    if(j.get<std::string>() == "HOTSTREAK") {
      v = LolLeaguesLeagueEmblem::HOTSTREAK_e;
      return;
    } 
    if(j.get<std::string>() == "VETERAN") {
      v = LolLeaguesLeagueEmblem::VETERAN_e;
      return;
    } 
  }
}