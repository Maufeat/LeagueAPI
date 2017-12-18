#pragma once
#include "../base_def.hpp" 
#include "LcdsGameInviteBaseRuntimeException.hpp"
namespace lol {
  struct LcdsInviteFailed { 
    LcdsGameInviteBaseRuntimeException exception;
    std::string summonerName;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LcdsInviteFailed& v) {
    j["exception"] = v.exception; 
    j["summonerName"] = v.summonerName; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LcdsInviteFailed& v) {
    v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}