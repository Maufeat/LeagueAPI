#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2Honor.hpp"
namespace lol {
  struct LolHonorV2HonorRecipient { 
    uint64_t gameId;
    uint64_t summonerId;
    std::vector<LolHonorV2Honor> honors; 
  };
  inline void to_json(json& j, const LolHonorV2HonorRecipient& v) {
    j["gameId"] = v.gameId; 
    j["summonerId"] = v.summonerId; 
    j["honors"] = v.honors; 
  }
  inline void from_json(const json& j, LolHonorV2HonorRecipient& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.honors = j.at("honors").get<std::vector<LolHonorV2Honor>>(); 
  }
}