#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLeaguesLeagueRank {  
    I_e = 0,
    II_e = 1,
    III_e = 2,
    IV_e = 3,
    NA_e = 5,
    V_e = 4,
  };
  inline void to_json(json& j, const LolLeaguesLeagueRank& v) {
    if(v == LolLeaguesLeagueRank::I_e) {
      j = "I";
      return;
    }
    if(v == LolLeaguesLeagueRank::II_e) {
      j = "II";
      return;
    }
    if(v == LolLeaguesLeagueRank::III_e) {
      j = "III";
      return;
    }
    if(v == LolLeaguesLeagueRank::IV_e) {
      j = "IV";
      return;
    }
    if(v == LolLeaguesLeagueRank::NA_e) {
      j = "NA";
      return;
    }
    if(v == LolLeaguesLeagueRank::V_e) {
      j = "V";
      return;
    }
  }
  inline void from_json(const json& j, LolLeaguesLeagueRank& v) {
    if(j.get<std::string>() == "I") {
      v = LolLeaguesLeagueRank::I_e;
      return;
    } 
    if(j.get<std::string>() == "II") {
      v = LolLeaguesLeagueRank::II_e;
      return;
    } 
    if(j.get<std::string>() == "III") {
      v = LolLeaguesLeagueRank::III_e;
      return;
    } 
    if(j.get<std::string>() == "IV") {
      v = LolLeaguesLeagueRank::IV_e;
      return;
    } 
    if(j.get<std::string>() == "NA") {
      v = LolLeaguesLeagueRank::NA_e;
      return;
    } 
    if(j.get<std::string>() == "V") {
      v = LolLeaguesLeagueRank::V_e;
      return;
    } 
  }
}