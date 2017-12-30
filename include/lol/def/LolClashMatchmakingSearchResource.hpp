#pragma once
#include "../base_def.hpp" 
#include "LolClashMatchmakingDodgeData.hpp"
namespace lol {
  struct LolClashMatchmakingSearchResource { 
    LolClashMatchmakingDodgeData dodgeData;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolClashMatchmakingSearchResource& v) {
    j["dodgeData"] = v.dodgeData; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolClashMatchmakingSearchResource& v) {
    v.dodgeData = j.at("dodgeData").get<LolClashMatchmakingDodgeData>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}