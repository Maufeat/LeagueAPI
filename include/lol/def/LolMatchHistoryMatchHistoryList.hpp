#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryGameList.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryList { 
    std::string platformId;
    uint64_t accountId;
    LolMatchHistoryMatchHistoryGameList games; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryList& v) {
    j["platformId"] = v.platformId; 
    j["accountId"] = v.accountId; 
    j["games"] = v.games; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryList& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>(); 
  }
}