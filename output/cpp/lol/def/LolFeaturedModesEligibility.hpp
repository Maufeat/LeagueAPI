#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolFeaturedModesEligibility { 
    bool eligible;
    int32_t queueId; 
  };
  void to_json(json& j, const LolFeaturedModesEligibility& v) {
  j["eligible"] = v.eligible; 
  j["queueId"] = v.queueId; 
  }
  void from_json(const json& j, LolFeaturedModesEligibility& v) {
  v.eligible = j.at("eligible").get<bool>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  }
}