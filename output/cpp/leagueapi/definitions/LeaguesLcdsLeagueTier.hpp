#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LeaguesLcdsLeagueTier { /**/ 
    BRONZE_e = 1, /**/ 
    CHALLENGER_e = 7, /**/ 
    DIAMOND_e = 5, /**/ 
    GOLD_e = 3, /**/ 
    MASTER_e = 6, /**/ 
    PLATINUM_e = 4, /**/ 
    SILVER_e = 2, /**/ 
  };
  static void to_json(json& j, const LeaguesLcdsLeagueTier& v) {
    switch(v) { 
    case LeaguesLcdsLeagueTier::BRONZE_e:
      j = "BRONZE";
    break;
    case LeaguesLcdsLeagueTier::CHALLENGER_e:
      j = "CHALLENGER";
    break;
    case LeaguesLcdsLeagueTier::DIAMOND_e:
      j = "DIAMOND";
    break;
    case LeaguesLcdsLeagueTier::GOLD_e:
      j = "GOLD";
    break;
    case LeaguesLcdsLeagueTier::MASTER_e:
      j = "MASTER";
    break;
    case LeaguesLcdsLeagueTier::PLATINUM_e:
      j = "PLATINUM";
    break;
    case LeaguesLcdsLeagueTier::SILVER_e:
      j = "SILVER";
    break;
    };
  }
  static void from_json(const json& j, LeaguesLcdsLeagueTier& v) {
    auto s = j.get<std::string>(); 
    if(s == "BRONZE") {
      v = LeaguesLcdsLeagueTier::BRONZE_e;
      return;
    } 
    if(s == "CHALLENGER") {
      v = LeaguesLcdsLeagueTier::CHALLENGER_e;
      return;
    } 
    if(s == "DIAMOND") {
      v = LeaguesLcdsLeagueTier::DIAMOND_e;
      return;
    } 
    if(s == "GOLD") {
      v = LeaguesLcdsLeagueTier::GOLD_e;
      return;
    } 
    if(s == "MASTER") {
      v = LeaguesLcdsLeagueTier::MASTER_e;
      return;
    } 
    if(s == "PLATINUM") {
      v = LeaguesLcdsLeagueTier::PLATINUM_e;
      return;
    } 
    if(s == "SILVER") {
      v = LeaguesLcdsLeagueTier::SILVER_e;
      return;
    } 
  }
} 