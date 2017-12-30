#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryList { 
    uint64_t accountId;
    std::string platformId;
    LolMatchHistoryMatchHistoryGameList games; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryList& v) {
    j["accountId"] = v.accountId; 
    j["platformId"] = v.platformId; 
    j["games"] = v.games; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryList& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>(); 
  }
}