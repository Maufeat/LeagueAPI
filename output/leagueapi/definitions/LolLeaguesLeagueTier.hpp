#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLeaguesLeagueTier { /**/ 
    BRONZE_e = 1, /**/ 
    CHALLENGER_e = 7, /**/ 
    DIAMOND_e = 5, /**/ 
    GOLD_e = 3, /**/ 
    MASTER_e = 6, /**/ 
    NONE_e = 0, /**/ 
    PLATINUM_e = 4, /**/ 
    SILVER_e = 2, /**/ 
  };
  static void to_json(json& j, const LolLeaguesLeagueTier& v) {
    switch(v) { 
    case LolLeaguesLeagueTier::BRONZE_e:
      j = "BRONZE";
    break;
    case LolLeaguesLeagueTier::CHALLENGER_e:
      j = "CHALLENGER";
    break;
    case LolLeaguesLeagueTier::DIAMOND_e:
      j = "DIAMOND";
    break;
    case LolLeaguesLeagueTier::GOLD_e:
      j = "GOLD";
    break;
    case LolLeaguesLeagueTier::MASTER_e:
      j = "MASTER";
    break;
    case LolLeaguesLeagueTier::NONE_e:
      j = "NONE";
    break;
    case LolLeaguesLeagueTier::PLATINUM_e:
      j = "PLATINUM";
    break;
    case LolLeaguesLeagueTier::SILVER_e:
      j = "SILVER";
    break;
    };
  }
  static void from_json(const json& j, LolLeaguesLeagueTier& v) {
    auto s = j.get<std::string>(); 
    if(s == "BRONZE") {
      v = LolLeaguesLeagueTier::BRONZE_e;
      return;
    } 
    if(s == "CHALLENGER") {
      v = LolLeaguesLeagueTier::CHALLENGER_e;
      return;
    } 
    if(s == "DIAMOND") {
      v = LolLeaguesLeagueTier::DIAMOND_e;
      return;
    } 
    if(s == "GOLD") {
      v = LolLeaguesLeagueTier::GOLD_e;
      return;
    } 
    if(s == "MASTER") {
      v = LolLeaguesLeagueTier::MASTER_e;
      return;
    } 
    if(s == "NONE") {
      v = LolLeaguesLeagueTier::NONE_e;
      return;
    } 
    if(s == "PLATINUM") {
      v = LolLeaguesLeagueTier::PLATINUM_e;
      return;
    } 
    if(s == "SILVER") {
      v = LolLeaguesLeagueTier::SILVER_e;
      return;
    } 
  }
} 