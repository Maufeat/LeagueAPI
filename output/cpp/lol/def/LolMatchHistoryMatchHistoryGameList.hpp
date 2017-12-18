#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryGame.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryGameList { 
    uint64_t gameIndexBegin;
    uint64_t gameCount;
    uint64_t gameIndexEnd;
    std::vector<LolMatchHistoryMatchHistoryGame> games;
    std::string gameBeginDate;
    std::string gameEndDate; 
  };
  inline void to_json(json& j, const LolMatchHistoryMatchHistoryGameList& v) {
    j["gameIndexBegin"] = v.gameIndexBegin; 
    j["gameCount"] = v.gameCount; 
    j["gameIndexEnd"] = v.gameIndexEnd; 
    j["games"] = v.games; 
    j["gameBeginDate"] = v.gameBeginDate; 
    j["gameEndDate"] = v.gameEndDate; 
  }
  inline void from_json(const json& j, LolMatchHistoryMatchHistoryGameList& v) {
    v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>(); 
    v.gameCount = j.at("gameCount").get<uint64_t>(); 
    v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>(); 
    v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame>>(); 
    v.gameBeginDate = j.at("gameBeginDate").get<std::string>(); 
    v.gameEndDate = j.at("gameEndDate").get<std::string>(); 
  }
}