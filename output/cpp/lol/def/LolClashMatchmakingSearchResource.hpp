#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashMatchmakingDodgeData.hpp>
namespace lol {
  struct LolClashMatchmakingSearchResource { 
    int32_t queueId;
    LolClashMatchmakingDodgeData dodgeData; 
  };
  inline void to_json(json& j, const LolClashMatchmakingSearchResource& v) {
    j["queueId"] = v.queueId; 
    j["dodgeData"] = v.dodgeData; 
  }
  inline void from_json(const json& j, LolClashMatchmakingSearchResource& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.dodgeData = j.at("dodgeData").get<LolClashMatchmakingDodgeData>(); 
  }
}