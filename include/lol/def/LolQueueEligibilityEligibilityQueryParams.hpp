#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolQueueEligibilityEligibilityQueryParams { 
    std::vector<uint64_t> summonerIds;
    std::vector<int32_t> queueIds; 
  };
  inline void to_json(json& j, const LolQueueEligibilityEligibilityQueryParams& v) {
    j["summonerIds"] = v.summonerIds; 
    j["queueIds"] = v.queueIds; 
  }
  inline void from_json(const json& j, LolQueueEligibilityEligibilityQueryParams& v) {
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
  }
}