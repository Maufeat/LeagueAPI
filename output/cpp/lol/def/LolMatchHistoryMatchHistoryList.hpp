#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryGameList.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryList { 
    LolMatchHistoryMatchHistoryGameList games;
    uint64_t accountId;
    std::string platformId; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryList& v) {
  j["games"] = v.games; 
  j["accountId"] = v.accountId; 
  j["platformId"] = v.platformId; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryList& v) {
  v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  }
}