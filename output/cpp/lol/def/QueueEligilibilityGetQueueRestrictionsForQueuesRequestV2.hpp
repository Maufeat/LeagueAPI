#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2 { 
    std::vector<std::string> queueRestrictionsToExclude;
    std::vector<int32_t> queueIds;
    std::vector<uint64_t> summonerIds; 
  };
  void to_json(json& j, const QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2& v) {
  j["queueRestrictionsToExclude"] = v.queueRestrictionsToExclude; 
  j["queueIds"] = v.queueIds; 
  j["summonerIds"] = v.summonerIds; 
  }
  void from_json(const json& j, QueueEligilibilityGetQueueRestrictionsForQueuesRequestV2& v) {
  v.queueRestrictionsToExclude = j.at("queueRestrictionsToExclude").get<std::vector<std::string>>(); 
  v.queueIds = j.at("queueIds").get<std::vector<int32_t>>(); 
  v.summonerIds = j.at("summonerIds").get<std::vector<uint64_t>>(); 
  }
}