#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryGameList { 
    uint64_t gameCount;
    std::string gameBeginDate;
    std::string gameEndDate;
    uint64_t gameIndexBegin;
    std::vector<LolMatchHistoryMatchHistoryGame> games;
    uint64_t gameIndexEnd; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGameList& v) {
    j["gameCount"] = v.gameCount; 
    j["gameBeginDate"] = v.gameBeginDate; 
    j["gameEndDate"] = v.gameEndDate; 
    j["gameIndexBegin"] = v.gameIndexBegin; 
    j["games"] = v.games; 
    j["gameIndexEnd"] = v.gameIndexEnd; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGameList& v) {
    v.gameCount = j.at("gameCount").get<uint64_t>(); 
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>(); 
    v.gameEndDate = j.at("gameEndDate").get<std::string>(); 
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>(); 
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame>>(); 
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>(); 
  }
}