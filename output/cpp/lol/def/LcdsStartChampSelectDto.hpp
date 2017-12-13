#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsFailedJoinPlayer.hpp>
namespace lol {
  struct LcdsStartChampSelectDto { 
    std::vector<LcdsFailedJoinPlayer> invalidPlayers; 
  };
  void to_json(json& j, const LcdsStartChampSelectDto& v) {
  j["invalidPlayers"] = v.invalidPlayers; 
  }
  void from_json(const json& j, LcdsStartChampSelectDto& v) {
  v.invalidPlayers = j.at("invalidPlayers").get<std::vector<LcdsFailedJoinPlayer>>(); 
  }
}