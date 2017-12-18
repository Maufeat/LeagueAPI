#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LeaguesLcdsLeagueTier {  
    BRONZE_e = 1,
    CHALLENGER_e = 7,
    DIAMOND_e = 5,
    GOLD_e = 3,
    MASTER_e = 6,
    PLATINUM_e = 4,
    SILVER_e = 2,
  };
  inline void to_json(json& j, const LeaguesLcdsLeagueTier& v) {
    if(v == LeaguesLcdsLeagueTier::BRONZE_e) {
      j = "BRONZE";
      return;
    }
    if(v == LeaguesLcdsLeagueTier::CHALLENGER_e) {
      j = "CHALLENGER";
      return;
    }
    if(v == LeaguesLcdsLeagueTier::DIAMOND_e) {
      j = "DIAMOND";
      return;
    }
    if(v == LeaguesLcdsLeagueTier::GOLD_e) {
      j = "GOLD";
      return;
    }
    if(v == LeaguesLcdsLeagueTier::MASTER_e) {
      j = "MASTER";
      return;
    }
    if(v == LeaguesLcdsLeagueTier::PLATINUM_e) {
      j = "PLATINUM";
      return;
    }
    if(v == LeaguesLcdsLeagueTier::SILVER_e) {
      j = "SILVER";
      return;
    }
  }
  inline void from_json(const json& j, LeaguesLcdsLeagueTier& v) {
    if(j.get<std::string>() == "BRONZE") {
      v = LeaguesLcdsLeagueTier::BRONZE_e;
      return;
    } 
    if(j.get<std::string>() == "CHALLENGER") {
      v = LeaguesLcdsLeagueTier::CHALLENGER_e;
      return;
    } 
    if(j.get<std::string>() == "DIAMOND") {
      v = LeaguesLcdsLeagueTier::DIAMOND_e;
      return;
    } 
    if(j.get<std::string>() == "GOLD") {
      v = LeaguesLcdsLeagueTier::GOLD_e;
      return;
    } 
    if(j.get<std::string>() == "MASTER") {
      v = LeaguesLcdsLeagueTier::MASTER_e;
      return;
    } 
    if(j.get<std::string>() == "PLATINUM") {
      v = LeaguesLcdsLeagueTier::PLATINUM_e;
      return;
    } 
    if(j.get<std::string>() == "SILVER") {
      v = LeaguesLcdsLeagueTier::SILVER_e;
      return;
    } 
  }
}