#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsGameInviteBaseRuntimeException.hpp>
namespace lol {
  struct LcdsInviteFailed { 
    LcdsGameInviteBaseRuntimeException exception;
    std::string summonerName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LcdsInviteFailed& v) {
  j["exception"] = v.exception; 
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LcdsInviteFailed& v) {
  v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException>(); 
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}