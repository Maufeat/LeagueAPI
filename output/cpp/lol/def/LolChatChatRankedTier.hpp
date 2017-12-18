#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChatChatRankedTier {  
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
  inline void to_json(json& j, const LolChatChatRankedTier& v) {
    if(v == LolChatChatRankedTier::BRONZE_e) {
      j = "BRONZE";
      return;
    }
    if(v == LolChatChatRankedTier::CHALLENGER_e) {
      j = "CHALLENGER";
      return;
    }
    if(v == LolChatChatRankedTier::DIAMOND_e) {
      j = "DIAMOND";
      return;
    }
    if(v == LolChatChatRankedTier::GOLD_e) {
      j = "GOLD";
      return;
    }
    if(v == LolChatChatRankedTier::MASTER_e) {
      j = "MASTER";
      return;
    }
    if(v == LolChatChatRankedTier::NOT_RANKED_e) {
      j = "NOT_RANKED";
      return;
    }
    if(v == LolChatChatRankedTier::PLATINUM_e) {
      j = "PLATINUM";
      return;
    }
    if(v == LolChatChatRankedTier::PROVISIONAL_e) {
      j = "PROVISIONAL";
      return;
    }
    if(v == LolChatChatRankedTier::SILVER_e) {
      j = "SILVER";
      return;
    }
  }
  inline void from_json(const json& j, LolChatChatRankedTier& v) {
    if(j.get<std::string>() == "BRONZE") {
      v = LolChatChatRankedTier::BRONZE_e;
      return;
    } 
    if(j.get<std::string>() == "CHALLENGER") {
      v = LolChatChatRankedTier::CHALLENGER_e;
      return;
    } 
    if(j.get<std::string>() == "DIAMOND") {
      v = LolChatChatRankedTier::DIAMOND_e;
      return;
    } 
    if(j.get<std::string>() == "GOLD") {
      v = LolChatChatRankedTier::GOLD_e;
      return;
    } 
    if(j.get<std::string>() == "MASTER") {
      v = LolChatChatRankedTier::MASTER_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_RANKED") {
      v = LolChatChatRankedTier::NOT_RANKED_e;
      return;
    } 
    if(j.get<std::string>() == "PLATINUM") {
      v = LolChatChatRankedTier::PLATINUM_e;
      return;
    } 
    if(j.get<std::string>() == "PROVISIONAL") {
      v = LolChatChatRankedTier::PROVISIONAL_e;
      return;
    } 
    if(j.get<std::string>() == "SILVER") {
      v = LolChatChatRankedTier::SILVER_e;
      return;
    } 
  }
}