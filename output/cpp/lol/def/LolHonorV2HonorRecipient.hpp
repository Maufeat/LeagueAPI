#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolHonorV2Honor.hpp>
namespace lol {
  struct LolHonorV2HonorRecipient { 
    std::vector<LolHonorV2Honor> honors;
    uint64_t gameId;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolHonorV2HonorRecipient& v) {
    j["honors"] = v.honors; 
    j["gameId"] = v.gameId; 
    j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolHonorV2HonorRecipient& v) {
    v.honors = j.at("honors").get<std::vector<LolHonorV2Honor>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}