#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatChatRankedTier { /**/ 
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
  static void to_json(json& j, const LolChatChatRankedTier& v) {
    switch(v) { 
    case LolChatChatRankedTier::BRONZE_e:
      j = "BRONZE";
    break;
    case LolChatChatRankedTier::CHALLENGER_e:
      j = "CHALLENGER";
    break;
    case LolChatChatRankedTier::DIAMOND_e:
      j = "DIAMOND";
    break;
    case LolChatChatRankedTier::GOLD_e:
      j = "GOLD";
    break;
    case LolChatChatRankedTier::MASTER_e:
      j = "MASTER";
    break;
    case LolChatChatRankedTier::NOT_RANKED_e:
      j = "NOT_RANKED";
    break;
    case LolChatChatRankedTier::PLATINUM_e:
      j = "PLATINUM";
    break;
    case LolChatChatRankedTier::PROVISIONAL_e:
      j = "PROVISIONAL";
    break;
    case LolChatChatRankedTier::SILVER_e:
      j = "SILVER";
    break;
    };
  }
  static void from_json(const json& j, LolChatChatRankedTier& v) {
    auto s = j.get<std::string>(); 
    if(s == "BRONZE") {
      v = LolChatChatRankedTier::BRONZE_e;
      return;
    } 
    if(s == "CHALLENGER") {
      v = LolChatChatRankedTier::CHALLENGER_e;
      return;
    } 
    if(s == "DIAMOND") {
      v = LolChatChatRankedTier::DIAMOND_e;
      return;
    } 
    if(s == "GOLD") {
      v = LolChatChatRankedTier::GOLD_e;
      return;
    } 
    if(s == "MASTER") {
      v = LolChatChatRankedTier::MASTER_e;
      return;
    } 
    if(s == "NOT_RANKED") {
      v = LolChatChatRankedTier::NOT_RANKED_e;
      return;
    } 
    if(s == "PLATINUM") {
      v = LolChatChatRankedTier::PLATINUM_e;
      return;
    } 
    if(s == "PROVISIONAL") {
      v = LolChatChatRankedTier::PROVISIONAL_e;
      return;
    } 
    if(s == "SILVER") {
      v = LolChatChatRankedTier::SILVER_e;
      return;
    } 
  }
} 