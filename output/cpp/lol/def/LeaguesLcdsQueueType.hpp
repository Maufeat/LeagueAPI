#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LeaguesLcdsQueueType {  
    RANKED_FLEX_SR_e = 2,
    RANKED_FLEX_TT_e = 3,
    RANKED_SOLO_5x5_e = 1,
  };
  inline void to_json(json& j, const LeaguesLcdsQueueType& v) {
    if(v == LeaguesLcdsQueueType::RANKED_FLEX_SR_e) {
      j = "RANKED_FLEX_SR";
      return;
    }
    if(v == LeaguesLcdsQueueType::RANKED_FLEX_TT_e) {
      j = "RANKED_FLEX_TT";
      return;
    }
    if(v == LeaguesLcdsQueueType::RANKED_SOLO_5x5_e) {
      j = "RANKED_SOLO_5x5";
      return;
    }
  }
  inline void from_json(const json& j, LeaguesLcdsQueueType& v) {
    if(j.get<std::string>() == "RANKED_FLEX_SR") {
      v = LeaguesLcdsQueueType::RANKED_FLEX_SR_e;
      return;
    } 
    if(j.get<std::string>() == "RANKED_FLEX_TT") {
      v = LeaguesLcdsQueueType::RANKED_FLEX_TT_e;
      return;
    } 
    if(j.get<std::string>() == "RANKED_SOLO_5x5") {
      v = LeaguesLcdsQueueType::RANKED_SOLO_5x5_e;
      return;
    } 
  }
}