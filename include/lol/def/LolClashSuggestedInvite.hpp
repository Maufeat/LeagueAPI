#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashSuggestedInvite { 
    uint64_t summonerId;
    uint64_t suggesterSummonerId; 
  };
  inline void to_json(json& j, const LolClashSuggestedInvite& v) {
    j["summonerId"] = v.summonerId; 
    j["suggesterSummonerId"] = v.suggesterSummonerId; 
  }
  inline void from_json(const json& j, LolClashSuggestedInvite& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.suggesterSummonerId = j.at("suggesterSummonerId").get<uint64_t>(); 
  }
}