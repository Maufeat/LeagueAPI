#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2 { 
    std::vector<std::string> queueRestrictionsToExclude;
    std::vector<uint64_t> summonerIds;
    std::vector<int32_t> queueIds; 
  };
  inline void to_json(json& j, const QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2& v) {
    j["queueRestrictionsToExclude"] = v.queueRestrictionsToExclude; 
    j["summonerIds"] = v.summonerIds; 
    j["queueIds"] = v.queueIds; 
  }
  inline void from_json(const json& j, QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2& v) {
    v.queueRestrictionsToExclude = j.at("queueRestrictionsToExclude").get<std::vector<std::string>>(); 
    v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
    v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
  }
}