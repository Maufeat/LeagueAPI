#pragma once
#include "../base_def.hpp" 
#include "LolChatChatRankedQueue.hpp"
#include "LolChatChatRankedTier.hpp"
namespace lol {
  struct LolChatChatRankedEntry { 
    LolChatChatRankedQueue rankedQueue;
    uint64_t games;
    std::string leagueName;
    uint64_t division;
    uint64_t wins;
    LolChatChatRankedTier rankedTier; 
  };
  inline void to_json(json& j, const LolChatChatRankedEntry& v) {
    j["rankedQueue"] = v.rankedQueue; 
    j["games"] = v.games; 
    j["leagueName"] = v.leagueName; 
    j["division"] = v.division; 
    j["wins"] = v.wins; 
    j["rankedTier"] = v.rankedTier; 
  }
  inline void from_json(const json& j, LolChatChatRankedEntry& v) {
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue>(); 
    v.games = j.at("games").get<uint64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier>(); 
  }
}