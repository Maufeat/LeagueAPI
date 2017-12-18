#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LeaguesLcdsLeagueRank {  
    I_e = 0,
    II_e = 1,
    III_e = 2,
    IV_e = 3,
    V_e = 4,
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueRank& v) {
    if(v == LeaguesLcdsLeagueRank::I_e) {
      j = "I";
      return;
    }
    if(v == LeaguesLcdsLeagueRank::II_e) {
      j = "II";
      return;
    }
    if(v == LeaguesLcdsLeagueRank::III_e) {
      j = "III";
      return;
    }
    if(v == LeaguesLcdsLeagueRank::IV_e) {
      j = "IV";
      return;
    }
    if(v == LeaguesLcdsLeagueRank::V_e) {
      j = "V";
      return;
    }
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueRank& v) {
    if(j.get<std::string>() == "I") {
      v = LeaguesLcdsLeagueRank::I_e;
      return;
    } 
    if(j.get<std::string>() == "II") {
      v = LeaguesLcdsLeagueRank::II_e;
      return;
    } 
    if(j.get<std::string>() == "III") {
      v = LeaguesLcdsLeagueRank::III_e;
      return;
    } 
    if(j.get<std::string>() == "IV") {
      v = LeaguesLcdsLeagueRank::IV_e;
      return;
    } 
    if(j.get<std::string>() == "V") {
      v = LeaguesLcdsLeagueRank::V_e;
      return;
    } 
  }
}