#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryList { 
    LolMatchHistoryMatchHistoryGameList games;
    std::string platformId;
    uint64_t accountId; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryList& v) {
    j["games"] = v.games; 
    j["platformId"] = v.platformId; 
    j["accountId"] = v.accountId; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryList& v) {
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}