#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2Honor.hpp"
namespace lol {
  struct LolHonorV2HonorRecipient { 
    uint64_t summonerId;
    std::vector<LolHonorV2Honor> honors;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolHonorV2HonorRecipient& v) {
    j["summonerId"] = v.summonerId; 
    j["honors"] = v.honors; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolHonorV2HonorRecipient& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.honors = j.at("honors").get<std::vector<LolHonorV2Honor>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}