#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsGameInviteBaseRuntimeException.hpp>
namespace lol {
  struct LcdsInviteFailed { 
    std::string summonerName;
    uint64_t summonerId;
    LcdsGameInviteBaseRuntimeException exception; 
  };
  void to_json(json& j, const LcdsInviteFailed& v) {
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  j["exception"] = v.exception; 
  }
  void from_json(const json& j, LcdsInviteFailed& v) {
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.exception = j.at("exception").get<LcdsGameInviteBaseRuntimeException>(); 
  }
}