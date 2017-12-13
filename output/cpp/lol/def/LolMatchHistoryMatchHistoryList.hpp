#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryGameList.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryList { 
    std::string platformId;
    LolMatchHistoryMatchHistoryGameList games;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryList& v) {
  j["platformId"] = v.platformId; 
  j["games"] = v.games; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryList& v) {
  v.platformId = j.at("platformId").get<std::string>(); 
  v.games = j.at("games").get<LolMatchHistoryMatchHistoryGameList>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}