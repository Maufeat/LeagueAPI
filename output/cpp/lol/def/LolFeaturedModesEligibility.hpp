#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolFeaturedModesEligibility { 
    int32_t queueId;
    bool eligible; 
  };
  void to_json(json& j, const LolFeaturedModesEligibility& v) {
  j["queueId"] = v.queueId; 
  j["eligible"] = v.eligible; 
  }
  void from_json(const json& j, LolFeaturedModesEligibility& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.eligible = j.at("eligible").get<bool>(); 
  }
}