#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueRank { /**/ 
    I_e = 0, /**/ 
    II_e = 1, /**/ 
    III_e = 2, /**/ 
    IV_e = 3, /**/ 
    NA_e = 5, /**/ 
    V_e = 4, /**/ 
  };
  static void to_json(json& j, const LolLeaguesLeagueRank& v) {
    switch(v) { 
    case LolLeaguesLeagueRank::I_e:
      j = "I";
    break;
    case LolLeaguesLeagueRank::II_e:
      j = "II";
    break;
    case LolLeaguesLeagueRank::III_e:
      j = "III";
    break;
    case LolLeaguesLeagueRank::IV_e:
      j = "IV";
    break;
    case LolLeaguesLeagueRank::NA_e:
      j = "NA";
    break;
    case LolLeaguesLeagueRank::V_e:
      j = "V";
    break;
    };
  }
  static void from_json(const json& j, LolLeaguesLeagueRank& v) {
    auto s = j.get<std::string>(); 
    if(s == "I") {
      v = LolLeaguesLeagueRank::I_e;
      return;
    } 
    if(s == "II") {
      v = LolLeaguesLeagueRank::II_e;
      return;
    } 
    if(s == "III") {
      v = LolLeaguesLeagueRank::III_e;
      return;
    } 
    if(s == "IV") {
      v = LolLeaguesLeagueRank::IV_e;
      return;
    } 
    if(s == "NA") {
      v = LolLeaguesLeagueRank::NA_e;
      return;
    } 
    if(s == "V") {
      v = LolLeaguesLeagueRank::V_e;
      return;
    } 
  }
} 