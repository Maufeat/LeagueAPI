#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryList { 
    std::string platformId;
    LolMatchHistoryMatchHistoryGameList games;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryList& v) {
    j["platformId"] = v.platformId; 
    j["games"] = v.games; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryList& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}