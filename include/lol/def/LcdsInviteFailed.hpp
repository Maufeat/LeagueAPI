#pragma once
#include "../base_def.hpp" 
#include "LcdsGameInviteBaseRuntimeException.hpp"
namespace lol {
  struct LcdsInviteFailed { 
    uint64_t summonerId;
    std::string summonerName;
    LcdsGameInviteBaseRuntimeException exception; 
  };
  inline void to_json(json& j, const LcdsInviteFailed& v) {
    j["summonerId"] = v.summonerId; 
    j["summonerName"] = v.summonerName; 
    j["exception"] = v.exception; 
  }
  inline void from_json(const json& j, LcdsInviteFailed& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException>(); 
  }
}