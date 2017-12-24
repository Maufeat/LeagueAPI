#pragma once
#include "../base_def.hpp" 
#include "LolChatChatRankedTier.hpp"
#include "LolChatChatRankedQueue.hpp"
namespace lol {
  struct LolChatChatRankedEntry { 
    LolChatChatRankedTier rankedTier;
    uint64_t division;
    LolChatChatRankedQueue rankedQueue;
    uint64_t games;
    uint64_t wins;
    std::string leagueName; 
  };
  inline void to_json(json& j, const LolChatChatRankedEntry& v) {
    j["rankedTier"] = v.rankedTier; 
    j["division"] = v.division; 
    j["rankedQueue"] = v.rankedQueue; 
    j["games"] = v.games; 
    j["wins"] = v.wins; 
    j["leagueName"] = v.leagueName; 
  }
  inline void from_json(const json& j, LolChatChatRankedEntry& v) {
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier>(); 
    v.division = j.at("division").get<uint64_t>(); 
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue>(); 
    v.games = j.at("games").get<uint64_t>(); 
    v.wins = j.at("wins").get<uint64_t>(); 
    v.leagueName = j.at("leagueName").get<std::string>(); 
  }
}