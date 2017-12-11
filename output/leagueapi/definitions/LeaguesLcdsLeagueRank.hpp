#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LeaguesLcdsLeagueRank { /**/ 
    I_e = 0, /**/ 
    II_e = 1, /**/ 
    III_e = 2, /**/ 
    IV_e = 3, /**/ 
    V_e = 4, /**/ 
  };
  static void to_json(json& j, const LeaguesLcdsLeagueRank& v) {
    switch(v) { 
    case LeaguesLcdsLeagueRank::I_e:
      j = "I";
    break;
    case LeaguesLcdsLeagueRank::II_e:
      j = "II";
    break;
    case LeaguesLcdsLeagueRank::III_e:
      j = "III";
    break;
    case LeaguesLcdsLeagueRank::IV_e:
      j = "IV";
    break;
    case LeaguesLcdsLeagueRank::V_e:
      j = "V";
    break;
    };
  }
  static void from_json(const json& j, LeaguesLcdsLeagueRank& v) {
    auto s = j.get<std::string>(); 
    if(s == "I") {
      v = LeaguesLcdsLeagueRank::I_e;
      return;
    } 
    if(s == "II") {
      v = LeaguesLcdsLeagueRank::II_e;
      return;
    } 
    if(s == "III") {
      v = LeaguesLcdsLeagueRank::III_e;
      return;
    } 
    if(s == "IV") {
      v = LeaguesLcdsLeagueRank::IV_e;
      return;
    } 
    if(s == "V") {
      v = LeaguesLcdsLeagueRank::V_e;
      return;
    } 
  }
} 