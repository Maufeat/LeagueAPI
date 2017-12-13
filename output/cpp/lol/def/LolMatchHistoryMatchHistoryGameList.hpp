#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchHistoryMatchHistoryGame.hpp>
namespace lol {
  struct LolMatchHistoryMatchHistoryGameList { 
    std::string gameBeginDate;
    std::string gameEndDate;
    uint64_t gameIndexBegin;
    std::vector<LolMatchHistoryMatchHistoryGame> games;
    uint64_t gameCount;
    uint64_t gameIndexEnd; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryGameList& v) {
  j["gameBeginDate"] = v.gameBeginDate; 
  j["gameEndDate"] = v.gameEndDate; 
  j["gameIndexBegin"] = v.gameIndexBegin; 
  j["games"] = v.games; 
  j["gameCount"] = v.gameCount; 
  j["gameIndexEnd"] = v.gameIndexEnd; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryGameList& v) {
  v.gameBeginDate = j.at("gameBeginDate").get<std::string>(); 
  v.gameEndDate = j.at("gameEndDate").get<std::string>(); 
  v.gameIndexBegin = j.at("gameIndexBegin").get<uint64_t>(); 
  v.games = j.at("games").get<std::vector<LolMatchHistoryMatchHistoryGame>>(); 
  v.gameCount = j.at("gameCount").get<uint64_t>(); 
  v.gameIndexEnd = j.at("gameIndexEnd").get<uint64_t>(); 
  }
}