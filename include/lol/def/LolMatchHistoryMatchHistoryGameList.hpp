#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryGameList { 
    std::vector<LolMatchHistoryMatchHistoryGame> games;
    uint64_t gameCount;
    uint64_t gameIndexEnd;
    std::string gameBeginDate;
    std::string gameEndDate;
    uint64_t gameIndexBegin; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGameList& v) {
    j["games"] = v.games; 
    j["gameCount"] = v.gameCount; 
    j["gameIndexEnd"] = v.gameIndexEnd; 
    j["gameBeginDate"] = v.gameBeginDate; 
    j["gameEndDate"] = v.gameEndDate; 
    j["gameIndexBegin"] = v.gameIndexBegin; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGameList& v) {
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame>>(); 
    v.gameCount = j.at("gameCount").get<uint64_t>(); 
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>(); 
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>(); 
    v.gameEndDate = j.at("gameEndDate").get<std::string>(); 
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>(); 
  }
}