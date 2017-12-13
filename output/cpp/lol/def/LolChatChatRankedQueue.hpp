#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolChatChatRankedQueue {  
    INVALID_e = 0,
    RANKED_FLEX_SR_e = 2,
    RANKED_FLEX_TT_e = 1,
    RANKED_SOLO_5x5_e = 3,
    RANKED_TEAM_3x3_e = 4,
    RANKED_TEAM_5x5_e = 5,
  };
  void to_json(json& j, const LolChatChatRankedQueue& v) {
    if(v == LolChatChatRankedQueue::INVALID_e) {
      j = "INVALID";
      return;
    }
    if(v == LolChatChatRankedQueue::RANKED_FLEX_SR_e) {
      j = "RANKED_FLEX_SR";
      return;
    }
    if(v == LolChatChatRankedQueue::RANKED_FLEX_TT_e) {
      j = "RANKED_FLEX_TT";
      return;
    }
    if(v == LolChatChatRankedQueue::RANKED_SOLO_5x5_e) {
      j = "RANKED_SOLO_5x5";
      return;
    }
    if(v == LolChatChatRankedQueue::RANKED_TEAM_3x3_e) {
      j = "RANKED_TEAM_3x3";
      return;
    }
    if(v == LolChatChatRankedQueue::RANKED_TEAM_5x5_e) {
      j = "RANKED_TEAM_5x5";
      return;
    }
  }
  void from_json(const json& j, LolChatChatRankedQueue& v) {
    if(j.get<std::string>() == "INVALID") {
      v = LolChatChatRankedQueue::INVALID_e;
      return;
    } 
    if(j.get<std::string>() == "RANKED_FLEX_SR") {
      v = LolChatChatRankedQueue::RANKED_FLEX_SR_e;
      return;
    } 
    if(j.get<std::string>() == "RANKED_FLEX_TT") {
      v = LolChatChatRankedQueue::RANKED_FLEX_TT_e;
      return;
    } 
    if(j.get<std::string>() == "RANKED_SOLO_5x5") {
      v = LolChatChatRankedQueue::RANKED_SOLO_5x5_e;
      return;
    } 
    if(j.get<std::string>() == "RANKED_TEAM_3x3") {
      v = LolChatChatRankedQueue::RANKED_TEAM_3x3_e;
      return;
    } 
    if(j.get<std::string>() == "RANKED_TEAM_5x5") {
      v = LolChatChatRankedQueue::RANKED_TEAM_5x5_e;
      return;
    } 
  }
}