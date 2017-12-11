#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LeaguesLcdsQueueType { /**/ 
    RANKED_FLEX_SR_e = 2, /**/ 
    RANKED_FLEX_TT_e = 3, /**/ 
    RANKED_SOLO_5x5_e = 1, /**/ 
  };
  static void to_json(json& j, const LeaguesLcdsQueueType& v) {
    switch(v) { 
    case LeaguesLcdsQueueType::RANKED_FLEX_SR_e:
      j = "RANKED_FLEX_SR";
    break;
    case LeaguesLcdsQueueType::RANKED_FLEX_TT_e:
      j = "RANKED_FLEX_TT";
    break;
    case LeaguesLcdsQueueType::RANKED_SOLO_5x5_e:
      j = "RANKED_SOLO_5x5";
    break;
    };
  }
  static void from_json(const json& j, LeaguesLcdsQueueType& v) {
    auto s = j.get<std::string>(); 
    if(s == "RANKED_FLEX_SR") {
      v = LeaguesLcdsQueueType::RANKED_FLEX_SR_e;
      return;
    } 
    if(s == "RANKED_FLEX_TT") {
      v = LeaguesLcdsQueueType::RANKED_FLEX_TT_e;
      return;
    } 
    if(s == "RANKED_SOLO_5x5") {
      v = LeaguesLcdsQueueType::RANKED_SOLO_5x5_e;
      return;
    } 
  }
} 