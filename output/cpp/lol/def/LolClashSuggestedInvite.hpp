#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashSuggestedInvite { 
    uint64_t suggesterSummonerId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolClashSuggestedInvite& v) {
    j["suggesterSummonerId"] = v.suggesterSummonerId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolClashSuggestedInvite& v) {
    v.suggesterSummonerId = j.at("suggesterSummonerId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}