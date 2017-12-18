#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashInviteSubRequest { 
    uint64_t substituteSummonerId;
    uint64_t replacedSummonerId; 
  };
  inline void to_json(json& j, const LolClashInviteSubRequest& v) {
    j["substituteSummonerId"] = v.substituteSummonerId; 
    j["replacedSummonerId"] = v.replacedSummonerId; 
  }
  inline void from_json(const json& j, LolClashInviteSubRequest& v) {
    v.substituteSummonerId = j.at("substituteSummonerId").get<uint64_t>(); 
    v.replacedSummonerId = j.at("replacedSummonerId").get<uint64_t>(); 
  }
}