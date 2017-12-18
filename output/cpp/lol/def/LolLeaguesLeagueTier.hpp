#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLeaguesLeagueTier {  
    BRONZE_e = 1,
    CHALLENGER_e = 7,
    DIAMOND_e = 5,
    GOLD_e = 3,
    MASTER_e = 6,
    NONE_e = 0,
    PLATINUM_e = 4,
    SILVER_e = 2,
  };
  inline void to_json(json& j, const LolLeaguesLeagueTier& v) {
    if(v == LolLeaguesLeagueTier::BRONZE_e) {
      j = "BRONZE";
      return;
    }
    if(v == LolLeaguesLeagueTier::CHALLENGER_e) {
      j = "CHALLENGER";
      return;
    }
    if(v == LolLeaguesLeagueTier::DIAMOND_e) {
      j = "DIAMOND";
      return;
    }
    if(v == LolLeaguesLeagueTier::GOLD_e) {
      j = "GOLD";
      return;
    }
    if(v == LolLeaguesLeagueTier::MASTER_e) {
      j = "MASTER";
      return;
    }
    if(v == LolLeaguesLeagueTier::NONE_e) {
      j = "NONE";
      return;
    }
    if(v == LolLeaguesLeagueTier::PLATINUM_e) {
      j = "PLATINUM";
      return;
    }
    if(v == LolLeaguesLeagueTier::SILVER_e) {
      j = "SILVER";
      return;
    }
  }
  inline void from_json(const json& j, LolLeaguesLeagueTier& v) {
    if(j.get<std::string>() == "BRONZE") {
      v = LolLeaguesLeagueTier::BRONZE_e;
      return;
    } 
    if(j.get<std::string>() == "CHALLENGER") {
      v = LolLeaguesLeagueTier::CHALLENGER_e;
      return;
    } 
    if(j.get<std::string>() == "DIAMOND") {
      v = LolLeaguesLeagueTier::DIAMOND_e;
      return;
    } 
    if(j.get<std::string>() == "GOLD") {
      v = LolLeaguesLeagueTier::GOLD_e;
      return;
    } 
    if(j.get<std::string>() == "MASTER") {
      v = LolLeaguesLeagueTier::MASTER_e;
      return;
    } 
    if(j.get<std::string>() == "NONE") {
      v = LolLeaguesLeagueTier::NONE_e;
      return;
    } 
    if(j.get<std::string>() == "PLATINUM") {
      v = LolLeaguesLeagueTier::PLATINUM_e;
      return;
    } 
    if(j.get<std::string>() == "SILVER") {
      v = LolLeaguesLeagueTier::SILVER_e;
      return;
    } 
  }
}