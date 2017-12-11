#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolRankedStatsRankedTier { /**/ 
    BRONZE_e = 2, /**/ 
    CHALLENGER_e = 8, /**/ 
    DIAMOND_e = 6, /**/ 
    GOLD_e = 4, /**/ 
    MASTER_e = 7, /**/ 
    NOT_RANKED_e = 0, /**/ 
    PLATINUM_e = 5, /**/ 
    PROVISIONAL_e = 1, /**/ 
    SILVER_e = 3, /**/ 
  };
  static void to_json(json& j, const LolRankedStatsRankedTier& v) {
    switch(v) { 
    case LolRankedStatsRankedTier::BRONZE_e:
      j = "BRONZE";
    break;
    case LolRankedStatsRankedTier::CHALLENGER_e:
      j = "CHALLENGER";
    break;
    case LolRankedStatsRankedTier::DIAMOND_e:
      j = "DIAMOND";
    break;
    case LolRankedStatsRankedTier::GOLD_e:
      j = "GOLD";
    break;
    case LolRankedStatsRankedTier::MASTER_e:
      j = "MASTER";
    break;
    case LolRankedStatsRankedTier::NOT_RANKED_e:
      j = "NOT_RANKED";
    break;
    case LolRankedStatsRankedTier::PLATINUM_e:
      j = "PLATINUM";
    break;
    case LolRankedStatsRankedTier::PROVISIONAL_e:
      j = "PROVISIONAL";
    break;
    case LolRankedStatsRankedTier::SILVER_e:
      j = "SILVER";
    break;
    };
  }
  static void from_json(const json& j, LolRankedStatsRankedTier& v) {
    auto s = j.get<std::string>(); 
    if(s == "BRONZE") {
      v = LolRankedStatsRankedTier::BRONZE_e;
      return;
    } 
    if(s == "CHALLENGER") {
      v = LolRankedStatsRankedTier::CHALLENGER_e;
      return;
    } 
    if(s == "DIAMOND") {
      v = LolRankedStatsRankedTier::DIAMOND_e;
      return;
    } 
    if(s == "GOLD") {
      v = LolRankedStatsRankedTier::GOLD_e;
      return;
    } 
    if(s == "MASTER") {
      v = LolRankedStatsRankedTier::MASTER_e;
      return;
    } 
    if(s == "NOT_RANKED") {
      v = LolRankedStatsRankedTier::NOT_RANKED_e;
      return;
    } 
    if(s == "PLATINUM") {
      v = LolRankedStatsRankedTier::PLATINUM_e;
      return;
    } 
    if(s == "PROVISIONAL") {
      v = LolRankedStatsRankedTier::PROVISIONAL_e;
      return;
    } 
    if(s == "SILVER") {
      v = LolRankedStatsRankedTier::SILVER_e;
      return;
    } 
  }
} 