#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ClientRequestError.hpp>
namespace lol {
  struct FailedInvite { 
    ClientRequestError exception;
    uint64_t playerId; 
  };
  inline void to_json(json& j, const FailedInvite& v) {
    j["exception"] = v.exception; 
    j["playerId"] = v.playerId; 
  }
  inline void from_json(const json& j, FailedInvite& v) {
    v.exception = j.at("exception").get<ClientRequestError>(); 
    v.playerId = j.at("playerId").get<uint64_t>(); 
  }
}