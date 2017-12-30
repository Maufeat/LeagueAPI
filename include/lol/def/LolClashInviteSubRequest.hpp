#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashInviteSubRequest { 
    uint64_t replacedSummonerId;
    uint64_t substituteSummonerId; 
  };
  inline void to_json(json& j, const LolClashInviteSubRequest& v) {
    j["replacedSummonerId"] = v.replacedSummonerId; 
    j["substituteSummonerId"] = v.substituteSummonerId; 
  }
  inline void from_json(const json& j, LolClashInviteSubRequest& v) {
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
    v.substituteSummonerId = j.at("substituteSummonerId").get<uint64_t>(); 
  }
}