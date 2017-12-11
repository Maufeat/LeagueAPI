#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatChatRankedQueue { /**/ 
    INVALID_e = 0, /**/ 
    RANKED_FLEX_SR_e = 2, /**/ 
    RANKED_FLEX_TT_e = 1, /**/ 
    RANKED_SOLO_5x5_e = 3, /**/ 
    RANKED_TEAM_3x3_e = 4, /**/ 
    RANKED_TEAM_5x5_e = 5, /**/ 
  };
  static void to_json(json& j, const LolChatChatRankedQueue& v) {
    switch(v) { 
    case LolChatChatRankedQueue::INVALID_e:
      j = "INVALID";
    break;
    case LolChatChatRankedQueue::RANKED_FLEX_SR_e:
      j = "RANKED_FLEX_SR";
    break;
    case LolChatChatRankedQueue::RANKED_FLEX_TT_e:
      j = "RANKED_FLEX_TT";
    break;
    case LolChatChatRankedQueue::RANKED_SOLO_5x5_e:
      j = "RANKED_SOLO_5x5";
    break;
    case LolChatChatRankedQueue::RANKED_TEAM_3x3_e:
      j = "RANKED_TEAM_3x3";
    break;
    case LolChatChatRankedQueue::RANKED_TEAM_5x5_e:
      j = "RANKED_TEAM_5x5";
    break;
    };
  }
  static void from_json(const json& j, LolChatChatRankedQueue& v) {
    auto s = j.get<std::string>(); 
    if(s == "INVALID") {
      v = LolChatChatRankedQueue::INVALID_e;
      return;
    } 
    if(s == "RANKED_FLEX_SR") {
      v = LolChatChatRankedQueue::RANKED_FLEX_SR_e;
      return;
    } 
    if(s == "RANKED_FLEX_TT") {
      v = LolChatChatRankedQueue::RANKED_FLEX_TT_e;
      return;
    } 
    if(s == "RANKED_SOLO_5x5") {
      v = LolChatChatRankedQueue::RANKED_SOLO_5x5_e;
      return;
    } 
    if(s == "RANKED_TEAM_3x3") {
      v = LolChatChatRankedQueue::RANKED_TEAM_3x3_e;
      return;
    } 
    if(s == "RANKED_TEAM_5x5") {
      v = LolChatChatRankedQueue::RANKED_TEAM_5x5_e;
      return;
    } 
  }
} 