#pragma once
#include "../base_def.hpp" 
#include "LolMatchHistoryMatchHistoryGame.hpp"
namespace lol {
  struct LolMatchHistoryMatchHistoryGameList { 
    uint64_t gameIndexBegin;
    uint64_t gameIndexEnd;
    std::string gameBeginDate;
    std::string gameEndDate;
    uint64_t gameCount;
    std::vector<LolMatchHistoryMatchHistoryGame> games; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGameList& v) {
    j["gameIndexBegin"] = v.gameIndexBegin; 
    j["gameIndexEnd"] = v.gameIndexEnd; 
    j["gameBeginDate"] = v.gameBeginDate; 
    j["gameEndDate"] = v.gameEndDate; 
    j["gameCount"] = v.gameCount; 
    j["games"] = v.games; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGameList& v) {
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>(); 
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>(); 
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>(); 
    v.gameEndDate = j.at("gameEndDate").get<std::string>(); 
    v.gameCount = j.at("gameCount").get<uint64_t>(); 
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame>>(); 
  }
}