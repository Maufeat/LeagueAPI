#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueEmblem { /**/ 
    FRESHBLOOD_e = 2, /**/ 
    HOTSTREAK_e = 1, /**/ 
    VETERAN_e = 0, /**/ 
  };
  static void to_json(json& j, const LolLeaguesLeagueEmblem& v) {
    switch(v) { 
    case LolLeaguesLeagueEmblem::FRESHBLOOD_e:
      j = "FRESHBLOOD";
    break;
    case LolLeaguesLeagueEmblem::HOTSTREAK_e:
      j = "HOTSTREAK";
    break;
    case LolLeaguesLeagueEmblem::VETERAN_e:
      j = "VETERAN";
    break;
    };
  }
  static void from_json(const json& j, LolLeaguesLeagueEmblem& v) {
    auto s = j.get<std::string>(); 
    if(s == "FRESHBLOOD") {
      v = LolLeaguesLeagueEmblem::FRESHBLOOD_e;
      return;
    } 
    if(s == "HOTSTREAK") {
      v = LolLeaguesLeagueEmblem::HOTSTREAK_e;
      return;
    } 
    if(s == "VETERAN") {
      v = LolLeaguesLeagueEmblem::VETERAN_e;
      return;
    } 
  }
} 