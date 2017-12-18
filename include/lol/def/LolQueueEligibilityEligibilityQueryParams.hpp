#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolQueueEligibilityEligibilityQueryParams { 
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> summonerIds; 
  };
  inline void to_json(json& j, const LolQueueEligibilityEligibilityQueryParams& v) {
    j["queueIds"] = v.queueIds; 
    j["summonerIds"] = v.summonerIds; 
  }
  inline void from_json(const json& j, LolQueueEligibilityEligibilityQueryParams& v) {
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  }
}