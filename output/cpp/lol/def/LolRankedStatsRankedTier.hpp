#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolRankedStatsRankedTier {  
    BRONZE_e = 2,
    CHALLENGER_e = 8,
    DIAMOND_e = 6,
    GOLD_e = 4,
    MASTER_e = 7,
    NOT_RANKED_e = 0,
    PLATINUM_e = 5,
    PROVISIONAL_e = 1,
    SILVER_e = 3,
  };
  void to_json(json& j, const LolRankedStatsRankedTier& v) {
    if(v == LolRankedStatsRankedTier::BRONZE_e) {
      j = "BRONZE";
      return;
    }
    if(v == LolRankedStatsRankedTier::CHALLENGER_e) {
      j = "CHALLENGER";
      return;
    }
    if(v == LolRankedStatsRankedTier::DIAMOND_e) {
      j = "DIAMOND";
      return;
    }
    if(v == LolRankedStatsRankedTier::GOLD_e) {
      j = "GOLD";
      return;
    }
    if(v == LolRankedStatsRankedTier::MASTER_e) {
      j = "MASTER";
      return;
    }
    if(v == LolRankedStatsRankedTier::NOT_RANKED_e) {
      j = "NOT_RANKED";
      return;
    }
    if(v == LolRankedStatsRankedTier::PLATINUM_e) {
      j = "PLATINUM";
      return;
    }
    if(v == LolRankedStatsRankedTier::PROVISIONAL_e) {
      j = "PROVISIONAL";
      return;
    }
    if(v == LolRankedStatsRankedTier::SILVER_e) {
      j = "SILVER";
      return;
    }
  }
  void from_json(const json& j, LolRankedStatsRankedTier& v) {
    if(j.get<std::string>() == "BRONZE") {
      v = LolRankedStatsRankedTier::BRONZE_e;
      return;
    } 
    if(j.get<std::string>() == "CHALLENGER") {
      v = LolRankedStatsRankedTier::CHALLENGER_e;
      return;
    } 
    if(j.get<std::string>() == "DIAMOND") {
      v = LolRankedStatsRankedTier::DIAMOND_e;
      return;
    } 
    if(j.get<std::string>() == "GOLD") {
      v = LolRankedStatsRankedTier::GOLD_e;
      return;
    } 
    if(j.get<std::string>() == "MASTER") {
      v = LolRankedStatsRankedTier::MASTER_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_RANKED") {
      v = LolRankedStatsRankedTier::NOT_RANKED_e;
      return;
    } 
    if(j.get<std::string>() == "PLATINUM") {
      v = LolRankedStatsRankedTier::PLATINUM_e;
      return;
    } 
    if(j.get<std::string>() == "PROVISIONAL") {
      v = LolRankedStatsRankedTier::PROVISIONAL_e;
      return;
    } 
    if(j.get<std::string>() == "SILVER") {
      v = LolRankedStatsRankedTier::SILVER_e;
      return;
    } 
  }
}